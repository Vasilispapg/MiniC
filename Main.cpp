#include <stdio.h>
#include <stdlib.h>
#include "grammar.tab.h"
#include "STNode.h"
extern FILE* yyin;


int main(int argc, char* argv[]) {

	fopen_s(&yyin, argv[1], "r");

	yy::parser* p = new yy::parser();
	p->parse();
	
	ofstream* f = new ofstream("stree.dot", ofstream::out);
	g_root->Visit_SyntaxTreePrinter(f, nullptr);
	
	g_root->Eval();

	system("dot -Tgif stree.dot -o stree.dot.gif");
	return 0;	

}