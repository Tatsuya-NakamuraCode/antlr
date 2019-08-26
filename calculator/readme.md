# セットアップ
Visual Studio 2019 Communityのインストールが必要。
+ C#で開発したい場合、C#によるデスクトップ開発のワークロードをインストールすること。
+ C++で開発したい場合、C++によるデスクトップ開発のワークロードをインストールすること。

このフォルダから見て1階層上に、antlr4-cpp-runtimeの用意が必要。
下記zipを解凍すること。
    https://www.antlr.org/download/antlr4-cpp-runtime-4.7.2-vs2015.zip

    下記のフォルダ構成になることを想定している
    ├─antlr-sample
        ├─antlr4-runtime
        │  ├─(antlr4-cpp-runtimeを解凍したもののため内容省略)
        │  :
        │
        ├─calculator
        │  ├─calculator.cpp
        │  │      Calculator.cpp.vcxproj
        │  │      : 
        │  │   
        │  ├─calculator.csharp
        │  │      Calculator.csharp.csproj
        │  │      : 
        │  │   
        │  │  Calculator.sln
        │  │  Expression.g4
        │  │  input.txt
        │  │  readme.md
        │  │
        │  └─gen
        │         ExpressionBaseListener.cpp
        │         ExpressionBaseListener.h
        |         :
        └─lib
           ├─(antlr4-cpp-runtimeを解凍したもののため内容省略)
           :