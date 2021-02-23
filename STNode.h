#pragma once
#include <string>
#include <list>
#include <fstream>


using namespace std;

typedef enum nodeType {
	COMPILEUNIT,STATEMENTS , STATEMENT,
	IFSTATEMENT, WHILESTATEMENT, RETURNSTATEMENT, BREAKSTATEMENT,
	EXPRESSION_NUMBER, EXPRESSION_VARIABLE,
	EXPRESSION_ADD, EXPRESSION_MINUS, EXPRESSION_MULT, EXPRESSION_DIV,
	EXPRESSION_ASSIGN, IDENTIFIER,AND,OR,LTE,LT,NOT,GT,GTE,EQUAL,NEQUAL,PLUSPLUS,COMPOUNDSTATEMENT
}NodeType;



class STNode {
public:

	STNode(NodeType type);
	virtual ~STNode();
	NodeType getNodeType();
	string getGraphvizLabel();
	STNode* getChild(int index);
	STNode* getParent(int index=0);

	void AddChild(STNode* node);
	virtual void Visit_SyntaxTreePrinter(ofstream* dotfile, STNode* parent);

	virtual int Eval();

protected: //mono apo tin stnode 
//koina gia olous
	NodeType m_nodeType;

	static bool break_status;

	string m_graphvizLabel;
	int m_serial;
	static int m_serialCounter;
	list<STNode* >* m_children;
	list<STNode* >* m_parents;


};

extern STNode* g_root;