#include "antlr4-runtime.h"
#include "gen/STLexer.h"
#include "gen/STParser.h"
#include "gen/STBaseVisitor.h"

#define _USE_MATH_DEFINES
#include <string.h>
#include <math.h>


struct cnvrslt {
	bool bSuccess;
	std::string cnvStr;

	cnvrslt() { bSuccess = false; cnvStr = ""; };
	cnvrslt(bool b, const std::string& str) { bSuccess = b; cnvStr = str; };
	cnvrslt(const cnvrslt& rslt) noexcept { bSuccess = rslt.bSuccess; cnvStr = rslt.cnvStr; };

};

cnvrslt retStr(const std::string& val) { return cnvrslt{ true, val }; }
cnvrslt retErr() { return cnvrslt{ false, "" }; }



class Visitor : public STBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { printf("%s\n", __func__); return retErr(); }
public:
	antlrcpp::Any visitInput(STParser::InputContext* ctx) override {
		//！！！ここ重要！！！
		//visit関数をオーバーライドしない場合、デフォルト実装が呼ばれるが、
		//構文要素が複数ある場合、最後の構文要素のvisit結果が採用される。
		//本当に構文要素が一つしか無い場合を除き、visit関数をオーバーライドしておくか、
		//aggregatecalcresult関数をオーバーライドして、何かの基準で正当なvisit結果を採用するようにしておくこと！！！
		return visit(ctx->stmt_list());
	}
	antlrcpp::Any visitStmt_list(STParser::Stmt_listContext* ctx) override {
		std::string str = "";
		printf("%s\n", __func__);
		for (auto stmt : ctx->statement()) {
			auto one_stmt = visit(stmt).as<cnvrslt>();
			if (one_stmt.bSuccess) {
				str += one_stmt.cnvStr;
			}
		}
		return retStr(str);
	}

	antlrcpp::Any visitStmt(STParser::StmtContext* ctx) override {
		printf("%s\n", __func__);
		return visit(ctx->single_stmt());
	}
	antlrcpp::Any visitLine_comment(STParser::Line_commentContext* ctx) override {
		printf("%s\n", __func__);
		auto text = ctx->getText();
		return retStr(';' + text.substr(2, text.length() - 2));
	}
	antlrcpp::Any visitStmt_assign(STParser::Stmt_assignContext* ctx) override {
		printf("%s\n", __func__);
		auto ret = visit(ctx->assign()->expr()).as<cnvrslt>();
		if (!ret.bSuccess) return ret;
		std::string str = ctx->assign()->IDENTIFIER()->getText();
		str += " = ";
		str += ret.cnvStr;
		str += '\n';
		printf("%s\n", str.c_str());
		return retStr(str);
	}
	antlrcpp::Any visitStmt_func(STParser::Stmt_funcContext* ctx) override {
		printf("%s\n", __func__);
		std::string str = "";
		str += ctx->function()->IDENTIFIER()->getText() + '(';
		auto ret = visitArg_exprs(ctx->function()->arg_exprs()).as<cnvrslt>();
		str += ret.cnvStr;
		str += ")\n";
		return retStr(str);
	}
	antlrcpp::Any visitArg_exprs(STParser::Arg_exprsContext* ctx) override {
		printf("%s\n", __func__);
		std::string str = "";
		if (ctx->single_arg().empty()) {
			printf("empty");
			return retStr("");
		}
		for (auto arg : ctx->single_arg()) {
			auto ret = visit(arg).as<cnvrslt>();
			if (ret.bSuccess) {
				str += ret.cnvStr + ", ";
			}
		}
		return retStr(str.substr(0, str.length() - 2));
	}
	antlrcpp::Any visitArg_expr(STParser::Arg_exprContext* ctx) override {
		printf("%s\n", __func__);
		return retStr(ctx->getText());
	}
	antlrcpp::Any visitArg_in(STParser::Arg_inContext* ctx) override {
		printf("%s\n", __func__);
		return retStr(ctx->getText());
	}
	antlrcpp::Any visitArg_out(STParser::Arg_outContext* ctx) override {
		printf("%s\n", __func__);
		return retStr(ctx->out_arg()->param->getText() + " := " + ctx->out_arg()->arg->getText());
	}
	antlrcpp::Any visitExpr_var(STParser::Expr_varContext* ctx) override {
		printf("%s\n", __func__);
		return retStr(ctx->variable()->getText());
	}



};


int main(int argc, const char* argv[]) {
	if (argc < 2) return -1;

	try {
		auto fileName = argv[1];

		std::ifstream stream;
		stream.open(fileName);

		using namespace antlr4;


		ANTLRInputStream input(stream);	//ファイルストリームから読み出す
		STLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		STParser parser(&tokens);

		auto inputTree = parser.input();

		auto rslt = Visitor().visit(inputTree).as<cnvrslt>(); 

		if (rslt.bSuccess) {
			printf("success \n%s", rslt.cnvStr.c_str());
		} 
		else {
			printf("Fail... \n");
		}

		return rslt.bSuccess? 0 : 1;
	}
	catch (...) {
		return -2;
	}
}

