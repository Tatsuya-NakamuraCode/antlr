#include "antlr4-runtime.h"
#include "gen/ExpressionLexer.h"
#include "gen/ExpressionParser.h"
#include "gen/ExpressionBaseVisitor.h"

#define _USE_MATH_DEFINES
#include <string.h>
#include <math.h>

// TODO: オーバーフロー検出。範囲外。非数対応。文字列演算。PI(10)=>PI*(10)の判定

const double constPI = 3.14159265358979;

enum VAL_TYPE {
	TYPE_INT = 0,
	TYPE_DOBLE,
	TYPE_STR,
	TYPE_ERR
};
enum ERR_TYPE {
	ERR_NOERR = 0,
	ERR_ZERO_DIV,
	ERR_OVER_FLOW,
	ERR_UNDER_FLOW,
	ERR_UNKNOWN_IDENTIFIER,
	ERR_STR_OP,
	ERR_INTERNAL
};
struct retval {
	int int_val;
	double double_val;
	std::string str_val;
	ERR_TYPE err_type;
};
struct result {
	VAL_TYPE retval_type;
	int int_val;
	double double_val;
	std::string str_val;
	ERR_TYPE err_type;
	bool success() { return retval_type != VAL_TYPE::TYPE_ERR; }
};

//result retInt(int val) { return result{ VAL_TYPE::TYPE_INT,  {val, 0, "", ERR_TYPE::ERR_NOERR} }; }
result retInt(int val) {
	result ret = { VAL_TYPE::TYPE_INT,  val, 0, "", ERR_TYPE::ERR_NOERR };
	printf("ret[%d]\n", ret.int_val);
	return ret;
}

result retDouble(double val) { return result{ VAL_TYPE::TYPE_DOBLE,  0, val, "", ERR_TYPE::ERR_NOERR }; }
result retStr(const std::string& val) { return result{ VAL_TYPE::TYPE_STR,  0, 0, val, ERR_TYPE::ERR_NOERR }; }
result retErr(ERR_TYPE err) { return result{ VAL_TYPE::TYPE_ERR,  0, 0, "", err }; }

result calcPlus(result& lhs, result& rhs) {
	switch (lhs.retval_type) {
	case TYPE_STR:
		switch (rhs.retval_type) {
		case TYPE_STR: return retStr(lhs.str_val + rhs.str_val);			//TODO: 最大長超過検出
		case TYPE_INT: return retErr(ERR_STR_OP);
		case TYPE_DOBLE: return retErr(ERR_STR_OP);
		default: return rhs;
		}
	case TYPE_INT:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retInt(lhs.int_val + rhs.int_val);			//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.int_val + rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	case TYPE_DOBLE:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retDouble(lhs.double_val + rhs.int_val);		//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.double_val + rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	default:return lhs;
	}
}

result calcMinus(result& lhs, result& rhs) {
	switch (lhs.retval_type) {
	case TYPE_STR: return retErr(ERR_STR_OP);
	case TYPE_INT:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retInt(lhs.int_val - rhs.int_val);			//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.int_val - rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	case TYPE_DOBLE:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retDouble(lhs.double_val - rhs.int_val);		//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.double_val - rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	default:return lhs;
	}
}

result calcAsteriskStr(int n, const std::string& str) {
	if (n < 1) return retStr("");
	std::string resultStr;

	for (int i = 0; i < n; ++i) {
		resultStr += str;															//TODO: 最大長超過検出
	}
	return retStr(resultStr);
}

result calcAsterisk(result& lhs, result& rhs) {
	switch (lhs.retval_type) {
	case TYPE_STR:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return calcAsteriskStr(rhs.int_val, lhs.str_val);
		case TYPE_DOBLE: return retErr(ERR_STR_OP);
		default: return rhs;
		}
	case TYPE_INT:
		switch (rhs.retval_type) {
		case TYPE_STR: return calcAsteriskStr(lhs.int_val, rhs.str_val);
		case TYPE_INT: return retInt(lhs.int_val * rhs.int_val);			//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.int_val * rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	case TYPE_DOBLE:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retDouble(lhs.double_val * rhs.int_val);		//TODO: オーバフロー検出
		case TYPE_DOBLE: return retDouble(lhs.double_val * rhs.double_val);	//TODO: オーバフロー検出
		default: return rhs;
		}
	default:return lhs;
	}
}

result calcSlash(result& lhs, result& rhs) {
	switch (lhs.retval_type) {
	case TYPE_STR: return retErr(ERR_STR_OP);
	case TYPE_INT:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return	(0 == rhs.int_val)? retErr(ERR_ZERO_DIV)
								: (0 == lhs.int_val % rhs.int_val)? retInt(lhs.int_val / rhs.int_val)
								: retDouble((double)lhs.int_val / rhs.int_val);
		case TYPE_DOBLE: return retDouble(lhs.int_val / rhs.double_val);
		default: return rhs;
		}
	case TYPE_DOBLE:
		switch (rhs.retval_type) {
		case TYPE_STR: return retErr(ERR_STR_OP);
		case TYPE_INT: return retDouble(lhs.double_val / rhs.int_val);
		case TYPE_DOBLE: return retDouble(lhs.double_val / rhs.double_val);
		default: return rhs;
		}
	default:return lhs;
	}
}

result calcSin(result& Arg) {
	switch (Arg.retval_type) {
	case TYPE_STR: return retErr(ERR_STR_OP);
	case TYPE_INT: return retDouble(sin((double)Arg.int_val));
	case TYPE_DOBLE: return retDouble(sin(Arg.double_val));
	default:return Arg;
	}
}


class Visitor : public ExpressionBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return retErr(ERR_INTERNAL); }
public:
	antlrcpp::Any visitInput(ExpressionParser::InputContext* ctx) override {
		//！！！ここ重要！！！
		//visit関数をオーバーライドしない場合、デフォルト実装が呼ばれるが、
		//構文要素が複数ある場合、最後の構文要素のvisit結果が採用される。
		//本当に構文要素が一つしか無い場合を除き、visit関数をオーバーライドしておくか、
		//aggregateResult関数をオーバーライドして、何かの基準で正当なvisit結果を採用するようにしておくこと！！！
		printf("input");
		antlrcpp::Any ret = visit(ctx->expr());
		printf("input2");
		return ret;
		return visit(ctx->expr());
	}
	antlrcpp::Any visitExpr_additive(ExpressionParser::Expr_additiveContext* ctx) override {
		printf("add.");
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();

		if (!lhs.success()) return lhs;
		if (!rhs.success()) return rhs;

		switch (ctx->op->getType()) {
		case ExpressionParser::PLUS: return calcPlus(lhs, rhs);
		case ExpressionParser::MINUS: return calcMinus(lhs, rhs);
		default: return defaultResult();
		}
	}
	antlrcpp::Any visitExpr_multipricative(ExpressionParser::Expr_multipricativeContext* ctx) override {
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success()) return lhs;
		if (!rhs.success()) return rhs;

		switch (ctx->op->getType()) {
		case ExpressionParser::ASTERISK: return calcAsterisk(lhs, rhs);
		case ExpressionParser::SLASH: return calcSlash(lhs, rhs);
		default: return defaultResult();
		}
	}
	antlrcpp::Any visitExpr_multipricative2(ExpressionParser::Expr_multipricative2Context* ctx) override {
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success()) return lhs;
		if (!rhs.success()) return rhs;
		return calcAsterisk(lhs, rhs);
	}

	antlrcpp::Any visitExpr_funccall(ExpressionParser::Expr_funccallContext* ctx) override {
		auto funcname = ctx->funcname->getText();
		if (_stricmp(funcname.c_str(), "SIN") == 0)
		{
			if (ctx->args.size() != 1) return defaultResult();
			auto arg = visit(ctx->args[0]).as<result>();
			return calcSin(arg);
		}
		return retErr(ERR_UNKNOWN_IDENTIFIER);
	}
	antlrcpp::Any visitConst_expr(ExpressionParser::Const_exprContext* ctx) override {
		auto constname = ctx->start->getText();
		if (_stricmp(constname.c_str(), "PI") == 0) return retDouble(constPI);
		return retErr(ERR_UNKNOWN_IDENTIFIER);
	}

	antlrcpp::Any visitInt_expr(ExpressionParser::Int_exprContext* ctx) override {
		printf("int.");
		switch (ctx->start->getType()) {
		case ExpressionParser::UINT: return retInt(atoi(ctx->start->getText().c_str()));			// TODO: 範囲外検出
		default: return defaultResult();
		}
	}
	antlrcpp::Any visitFp_expr(ExpressionParser::Fp_exprContext* ctx) override {
		switch (ctx->start->getType()) {
		case ExpressionParser::FP_NUM: return retDouble(atof(ctx->start->getText().c_str()));		// TODO: 範囲外検出
		default: return defaultResult();
		}
	}
	antlrcpp::Any visitStr_expr(ExpressionParser::Str_exprContext* ctx) override {
		auto text = ctx->start->getText();
		return retStr(text.substr(1, text.length()-2));
	}


};

std::string getErr(ERR_TYPE errType) {
	switch (errType) {
	case ERR_NOERR:
		return "ERR_NOERR";
	case ERR_ZERO_DIV:
		return "ERR_ZERO_DIV";
	case ERR_OVER_FLOW:
		return "ERR_OVER_FLOW";
	case ERR_UNDER_FLOW:
		return "ERR_UNDER_FLOW";
	case ERR_UNKNOWN_IDENTIFIER:
		return "ERR_UNKNOWN_IDENTIFIER";
	case ERR_STR_OP:
		return "ERR_STR_OP";
	case ERR_INTERNAL:
		return "ERR_INTERNAL";
	default:
		return "ERR_???";
	}
}

int main(int argc, const char* argv[]) {
	if (argc < 2) return -1;

	try {
		auto fileName = argv[1];

		std::ifstream stream;
		stream.open(fileName);

		using namespace antlr4;


		ANTLRInputStream input(stream);	//ファイルストリームから読み出す
		ExpressionLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		ExpressionParser parser(&tokens);

		auto inputTree = parser.input();
		
		auto ret = Visitor().visit(inputTree).as<result>(); // TODO: as<result>で例外になる。。
		printf("exe\n");
		switch (ret.retval_type) {
		case TYPE_STR:  printf("success. str %s\n", ret.str_val.c_str());
		case TYPE_INT:  printf("success. int %d\n", ret.int_val);
		case TYPE_DOBLE:  printf("success. double %f\n", ret.double_val);
		default:printf("error. type[%s]\n", getErr(ret.err_type).c_str());
		}
		printf("success.");
		return ret.success() ? 0 : 1;
	}
	catch (...) {
		return -2;
	}
}

