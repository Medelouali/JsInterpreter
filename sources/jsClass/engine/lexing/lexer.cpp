#include<vector>
#include"lexer.h"
#include "./../error/tools/strings/strings.h"

//There are two cases binary operators or unary operators that's it;
std::vector<std::string> lexer(const std::string& base, std::vector<std::string> ops){
    std::vector<std::string> vect;
    static std::vector<std::string> original=ops;
    long unsigned int n=base.length(), opSize=ops.size();
    std::string op, lString="", rString="";

    if(n==0) return vect;
    if(opSize==0){
        vect.push_back(base);
        return vect;
    };
    op=ops[opSize-1];
    ops.pop_back();
    word wordOperator=findWord(base, op), leftOperand, rightOperand;
    if(wordOperator.found){
        leftOperand=operandIndex(wordOperator.start, base, false);
        rightOperand=operandIndex(wordOperator.end, base, true);
        if(leftOperand.found){
            vect.push_back(slice(leftOperand.start, leftOperand.end, base));
            lString=slice(0, leftOperand.start-1, base);
        };
        vect.push_back(slice(wordOperator.start, wordOperator.end, base));        
        if(rightOperand.found){
            vect.push_back(slice(rightOperand.start, rightOperand.end, base));
            rString=slice(rightOperand.end+1, n-1, base);
        };
        return combine<std::string>(
                    combine<std::string>(lexer(lString, ops), vect), 
                    lexer(rString, original)
                );
    };
    return lexer(base, ops);
};
