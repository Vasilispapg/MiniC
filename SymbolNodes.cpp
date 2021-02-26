#include "SymbolNodes.h"
#include "SymbolTable.h"
#include <iostream>
#include <set>

CCompileUnit::CCompileUnit() :STNode(NodeType::COMPILEUNIT) {}
CCompileUnit::~CCompileUnit() {}

CStatements::CStatements() : STNode(NodeType::STATEMENTS) {}
CStatements::~CStatements(){}

CStatement::CStatement() : STNode(NodeType::STATEMENT) {}
CStatement::~CStatement() {}

CAdd::CAdd() : STNode(NodeType::EXPRESSION_ADD) {}
CAdd::~CAdd(){}

CDiv::CDiv() : STNode(NodeType::EXPRESSION_DIV) {}
CDiv::~CDiv() {}

CMult::CMult() : STNode(NodeType::EXPRESSION_MULT) {}
CMult::~CMult() {}

CMinus::CMinus() : STNode(NodeType::EXPRESSION_MINUS) {}
CMinus::~CMinus() {}

CIFStatement::CIFStatement() : STNode(NodeType::IFSTATEMENT) {}
CIFStatement::~CIFStatement() {}


CAnd::CAnd() : STNode(NodeType::AND) {}
CAnd::~CAnd() {}

COr::COr() : STNode(NodeType::OR) {}
COr::~COr() {}

CLt::CLt() : STNode(NodeType::LT) {}
CLt::~CLt() {}

CGt::CGt() : STNode(NodeType::GT) {}
CGt::~CGt() {}

CLte::CLte() : STNode(NodeType::LTE) {}
CLte::~CLte() {}

CGte::CGte() : STNode(NodeType::GTE) {}
CGte::~CGte() {}

CNot::CNot() : STNode(NodeType::NOT) {}
CNot::~CNot() {}

CEqual::CEqual() : STNode(NodeType::EQUAL) {}
CEqual::~CEqual() {}

CNequal::CNequal() : STNode(NodeType::NEQUAL) {}
CNequal::~CNequal() {}

CNUMBER::CNUMBER(char *text) : STNode(NodeType::EXPRESSION_NUMBER) {
	m_number = atoi(text);
	m_graphvizLabel.append("_" + std::to_string(m_number));
}
CNUMBER::~CNUMBER() {}

void CCompileUnit::Visit_SyntaxTreePrinter(ofstream* dotfile, STNode* parent) {
	list<STNode* >::iterator it;
	if (parent == nullptr) {
		(*dotfile) << "digraph G{\n";
		for (it = m_children->begin(); it != m_children->end(); it++) {
			(*it)->Visit_SyntaxTreePrinter(dotfile, this);
		}
		(*dotfile) << "}";
		dotfile->close();
	}
	else {
		STNode::Visit_SyntaxTreePrinter(dotfile, this);
	}
}

int CNUMBER::Eval() {
	return m_number;
}

int CAdd::Eval() {
	list<STNode*>::iterator it=m_children->begin();
	int result = (*it)->Eval();
	advance(it, 1);
	result+=(*it)->Eval();
	return result;
}

int CMinus::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int result = (*it)->Eval();
	advance(it, 1);
	result -= (*it)->Eval();
	return result;
}

int CMult::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int result = (*it)->Eval();
	advance(it, 1);
	result *= (*it)->Eval();
	return result;
}

int CDiv::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int result = (*it)->Eval();
	advance(it, 1);
	if (*it == 0) {
		printf("Error diveded by zero");
		exit(1);
	}
	else {
		result /= (*it)->Eval();
		return result;
	}
}

int CAnd::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 && num2)
		return 1;
	else
		return 0;
}

int COr::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 || num2)
		return 1;
	else
		return 0;
}

int CNot::Eval() {
	list<STNode*>::iterator it = m_children->begin();

	return !(*it)->Eval();
}

int CLt::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 < num2)
		return 1;
	else
		return 0;
}

int CLte::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 <=num2)
		return 1;
	else
		return 0;
}


int CGt::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 > num2)
		return 1;
	else
		return 0;
}

int CGte::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 >= num2)
		return 1;
	else
		return 0;
}

int CEqual::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 == num2)
		return 1;
	else
		return 0;
}

int CNequal::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	int num1 = (*it)->Eval();
	advance(it, 1);
	int num2 = (*it)->Eval();
	if (num1 != num2)
		return 1;
	else
		return 0;
}


int CIFStatement::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	if (m_children->size()==2) {
		if ((*it)->Eval())
		{
			advance(it, 1);
			(*it)->Eval();
		}
	}
	else {
		if ((*it)->Eval())
		{
			advance(it, 1);
			(*it)->Eval();
		}
		else {
			advance(it, 2);
			(*it)->Eval();
		}
	}
	return 0;
}

CIDENTIFIER::CIDENTIFIER(char* text) :STNode(NodeType::IDENTIFIER){
	m_name = (string)text;
	m_number = 0;
	m_graphvizLabel.append("_" + m_name);
}
CIDENTIFIER::~CIDENTIFIER() {}
int CIDENTIFIER::Eval() {
	return m_number;
}


CAssignment::CAssignment() : STNode(NodeType::EXPRESSION_ASSIGN){}


CAssignment::~CAssignment() {}

int CAssignment::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	CIDENTIFIER* id = dynamic_cast<CIDENTIFIER*>(*it);
	advance(it, 1);
	id->m_number = (*it)->Eval();
	cout << id->m_name << "=" << id->m_number << endl;
	return id->m_number;
}


CWhileStatement::CWhileStatement() : STNode(NodeType::WHILESTATEMENT){}
CWhileStatement::~CWhileStatement(){}

int CWhileStatement::Eval() {
	list<STNode*>::iterator it_child1 = m_children->begin();
	list<STNode*>::iterator it_child2=m_children->begin();
	advance(it_child2, 1);
	while((*it_child1)->Eval()) {
		if (break_status) {
			break;
		}
		(*it_child2)->Eval();
	}
	return 0;
}
CPlusplus::CPlusplus() : STNode(NodeType::PLUSPLUS) {}
CPlusplus::~CPlusplus() {}

int CPlusplus::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	CIDENTIFIER* id = dynamic_cast<CIDENTIFIER*>(*it);
	id->m_number += 1;
	cout << id->m_name << "=" << id->m_number << endl;

	return id->m_number;
}

CBreakStatement::CBreakStatement():STNode(NodeType::BREAKSTATEMENT){}
CBreakStatement::~CBreakStatement(){}

int CBreakStatement::Eval() {
	break_status = true;
	return 0;
}

CCompoundStatement::CCompoundStatement() : STNode(NodeType::COMPOUNDSTATEMENT){}
CCompoundStatement::~CCompoundStatement(){}


CFunction::CFunction() : STNode(NodeType::FUNCTION){}
CFunction::~CFunction(){}

int CFunction::Eval() { //οτι θελω για την func πρεπει να ισχυει εκει μεσα
	//μολις τελειωσει η func θα πρεπει να αναιρουνται ολα


	return 0;
}

CArguments::CArguments() : STNode(NodeType::ARGUMENTS) {}
CArguments::~CArguments() {}

int CArguments::Eval() {
	list<STNode*>::iterator it = m_children->begin();
	for (; it != m_children->end(); it++) {
		(*it)->Eval();
	}

	return 2;
}

CSet::CSet() : STNode(NodeType::SET) {}
CSet::~CSet(){}

int CSet::Eval() {
	set<int> s;
	if (m_children->size() != 0) {
		list<STNode*>::iterator it = m_children->begin();
		for (; it != m_children->end(); it++) {
			int num = (*it)->Eval();
			cout << num << endl;
			s.insert(num);
		}
	}
	return 2;
}

CFormalArgs::CFormalArgs() : STNode(NodeType::FUNCTION_ARGUMENTS) {}
CFormalArgs::~CFormalArgs() {}