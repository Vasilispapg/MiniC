#include "STNode.h"

STNode* g_root = nullptr;
int STNode::m_serialCounter = 0;
bool STNode::break_status = false;

const char* g_nodeType[] = { "COMPILEUNIT","STATEMENTS", "SET", "STATEMENT","FUNCTION_ARGUMENTS",
						"IFSTATEMENT" ,"WHILESTATEMENT", "RETURNSTATEMENT","BREAKSTATEMENT",
					  "EXPRESSION_NUMBER", "EXPRESSION_VARIABLE", "FUNCTION", "ARGUMENTS",
					  "EXPRESSION_ADD", "EXPRESSION_MINUS", "EXPRESSION_MULT", "EXPRESSION_DIV" ,
					 "NT_EXPRESSION_ASSIGN","NT_EXPRESSION_ASSIGN_FOR_SET", "NT_IDENTIFIER","EXPRESSION_AND","EXPRESSION_OR",
					"EXPRESSION_LTE","EXPRESSION_LT","EXPRESSION_NOT","EXPRESSION_GT",
					"EXPRESSION_GTE","EXPRESSION_EQUAL","EXPRESSION_NEQUAL","PLUS_PLUS","COMPOUNDSTATEMENT","EXPRESSION_UNION",
					"EXPRESSION_UNIQUE","EXPRESSION_SETXOR","EXPRESSION_SETDIFF","EXPRESSION_ISMEMBER"
};

STNode::STNode(NodeType type) {
	m_nodeType = type;
	m_serial = m_serialCounter++;
	m_children = new list < STNode*>;
	m_parents = new list<STNode*>;
	m_graphvizLabel = _strdup(g_nodeType[m_nodeType]);
	m_graphvizLabel.append("_" + std::to_string(m_serial));
}

STNode::~STNode() {
	list <STNode*>::iterator it;
	for (it = m_children->begin(); it!=m_children->end(); it++) {
		delete* it;
	}
	delete m_children;
	delete m_parents;
}

void STNode::AddChild(STNode *node) {
	m_children->push_back(node);
	node->m_parents->push_back(this);
}

STNode* STNode::getChild(int index) {
	list <STNode*>::iterator it=m_children->begin();
	advance(it, index);
	return *it;
	
}
STNode* STNode::getParent(int index) {
	list <STNode*>::iterator it = m_parents->begin();
	advance(it, index);
	return *it;
}

void STNode::Visit_SyntaxTreePrinter(ofstream* dotfile, STNode* parent) {
	list <STNode*>::iterator it;

	(*dotfile) << "\"" << parent->getGraphvizLabel() << "\"->\"" << getGraphvizLabel() << "\";\n";
	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->Visit_SyntaxTreePrinter(dotfile, this);
	}

} 

NodeType STNode::getNodeType() {
	return m_nodeType;
}

string STNode::getGraphvizLabel() {
	return m_graphvizLabel;
}

int STNode::Eval() {
	list <STNode*>::iterator it;
	for (it = m_children->begin(); it != m_children->end(); it++) {
		(*it)->Eval();
		if (break_status) {
			break;
		}
	}
	
	return 0;
}

set<int> STNode::EvalSet() {
	set<int> m_set;
	list <STNode*>::iterator it;
	for (it = m_children->begin(); it != m_children->end(); it++) {
		m_set =(*it)->EvalSet();
		if (break_status) {
			break;
		}
	}
	return m_set;
}
