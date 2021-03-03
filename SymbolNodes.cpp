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
int CStatement::Eval() {
	list <STNode*>::iterator it = m_children->begin();

	(*it)->EvalSet();
	(*it)->Eval();
	return 0;
}


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
set<int> CNUMBER::EvalSet() {
	set<int> m_set;
	m_set.insert(m_number);
	return m_set;
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
	m_set = {};
	m_graphvizLabel.append("_" + m_name);
}
CIDENTIFIER::~CIDENTIFIER() {}
int CIDENTIFIER::Eval() {
	return m_number;
}

set<int> CIDENTIFIER::EvalSet() {
	return m_set;
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
		(*it_child2)->Eval(); //gia na trexei tis mesa prajeis
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
}//not done yet

CArguments::CArguments() : STNode(NodeType::ARGUMENTS) {}
CArguments::~CArguments() {}

int CArguments::Eval() {
	int num;
	list<STNode*>::iterator it = m_children->begin();
	for (; it != m_children->end(); it++) {
		num = (*it)->Eval();
	}
	return num;
}

CSet::CSet() : STNode(NodeType::SET) {}
CSet::~CSet(){}

//set<int> CSet::EvalSet() {
//	set<int> m_set;
//	if (m_children->size() != 0) {
//		set<int>::iterator it_set;
//		list<STNode*>::iterator it = m_children->begin();
//		for (; it != m_children->end(); it++) {
//			m_set=(*it)->EvalSet();
	//	}
//	}

	//return m_set; //epistrefete sto CAssignment()
//}

int CSet::Eval() {
	set<int> m_set;
	if (m_children->size() != 0) {
		set<int>::iterator it_set;
		list<STNode*>::iterator it = m_children->begin();
		for (; it != m_children->end(); it++) {
			m_set = (*it)->EvalSet();
		}
	}

	return 0; //epistrefete sto CAssignment()
}


set<int> CArguments::EvalSet() {
	int num;
	static set<int> m_set; //static gia na pairnei oles tis times
	set<int> m_set_non;
	list<STNode*>::iterator it = m_children->begin();
	if (m_children->size() == 1) {
		m_set.clear(); //katharizei tin m_set gia na min pairnoun oi epomenes sets tis times tis.

		num = (*it)->Eval(); //kanei Eval ta CNUMBER/CIDENTIFIER

		m_set.insert(num); // vazw tis times apo to num/id sto set
	}
	else if(m_children->size()==2) {
		(*it)->EvalSet();
		advance(it, 1);
		num = (*it)->Eval(); //kanei Eval ta CNUMBER/CIDENTIFIER

		m_set.insert(num); // vazw tis times apo to num/id sto set

	}
	return m_set; //epistrefw tin timi sto CSet()
}

set<int> CAssignmentForSet::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	CIDENTIFIER* id = dynamic_cast<CIDENTIFIER*>(*it);
	advance(it, 1);

	id->m_set = (*it)->EvalSet();

	if (!id->m_set.empty()) {
		cout << id->m_name << "= {";
		for (set<int>::iterator it = id->m_set.begin(); it != id->m_set.end(); it++) {
			printf("%d,", *it);
		}
		cout << "\b" << "}" << endl;
	}
	else {
		cout << id->m_name << "= {}" << endl;
	}

	return id->m_set;
}

CAssignmentForSet::CAssignmentForSet() : STNode(NodeType::EXPRESSION_ASSIGN_FOR_SET){}
CAssignmentForSet::~CAssignmentForSet(){}

CFormalArgs::CFormalArgs() : STNode(NodeType::FUNCTION_ARGUMENTS) {}
CFormalArgs::~CFormalArgs() {}

CUnion::CUnion() : STNode(NodeType::UNION) {}
CUnion::~CUnion() {}

CUnique::CUnique() : STNode(NodeType::UNIQUE) {}
CUnique::~CUnique() {}


CSetxor::CSetxor() : STNode(NodeType::SETXOR) {}
CSetxor::~CSetxor() {}

CIsmember::CIsmember() : STNode(NodeType::ISMEMBER) {}
CIsmember::~CIsmember() {}

CSetdiff::CSetdiff() : STNode(NodeType::SETDIFF) {}
CSetdiff::~CSetdiff() {}

set<int> CUnion::EvalSet() {
	list<STNode*>::iterator it=m_children->begin();
	set<int> id_1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> id_2 = (*it)->EvalSet();
	set<int> m_set;
	
	for (set<int>::iterator itr = id_2.begin(); itr != id_2.end(); itr++) {
		m_set.insert(*itr);
	}
	for (set<int>::iterator itr = id_1.begin(); itr != id_1.end(); itr++) {
		m_set.insert(*itr);
	}

	if (m_set.size() != 0) {
		cout << "UNION: {";
		for (set<int>::iterator it = m_set.begin(); it != m_set.end(); it++) {
			printf("%d,", *it);
		}
		cout << "\b}" << endl;
	}
	else {
		cout << "UNION: {}" << endl;
	}
	return m_set;
}

set<int> CUnique::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> id_1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> id_2 = (*it)->EvalSet();
	set<int>::iterator itr_id2, itr_id1;
	set<int> m_set;
	//vriskw ta monadika stoixeia
	for (itr_id2 = id_2.begin(); itr_id2 != id_2.end(); itr_id2++) {
		for (itr_id1 = id_1.begin(); itr_id1 != id_1.end(); itr_id1++) {
			if (*itr_id1==*itr_id2) {
				m_set.insert(*itr_id1);
			}
		}
	}
	if (m_set.size() != 0) {
		cout << "UNIQUE: {";
		for (set<int>::iterator it = m_set.begin(); it != m_set.end(); it++) {
			printf("%d,", *it);
		}
		cout << "\b}"<< endl;
	}
	else {
		cout << "UNIQUE: {}" <<endl;
	}
	
	return m_set;
}

set<int> CSetxor::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> id_1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> id_2 = (*it)->EvalSet();
	set<int> m_set;
	//oti yparxei sto id_1 kai oxi sto id_2 kai anapoda.
	bool flag=false;
	int num;
	for (set<int>::iterator it = id_1.begin(); it != id_1.end(); it++) {
		for (set<int>::iterator it2 = id_2.begin(); it2 != id_2.end(); it2++) {
			num = *it;
			if (*it == *it2){
				flag = true; //den yparxei
				break;
			}
		}
		if (!flag) {
			m_set.insert(num);
		}
		flag = false;
	}

	for (set<int>::iterator it2 = id_2.begin(); it2 != id_2.end(); it2++) {
		for (set<int>::iterator it1 = id_1.begin(); it1 != id_1.end(); it1++) {
			num = *it2;
			if (*it1 == *it2){
				flag = true; //den yparxei
				break;
			}
		}
		if (!flag) {
			m_set.insert(num);
		}
		flag = false;
	}

	if (m_set.size() != 0) {
		cout << "SETXOR: {";
		for (set<int>::iterator it = m_set.begin(); it != m_set.end(); it++) {
			printf("%d,", *it);
		}
		cout << "\b}"<< endl;
	}
	else {
		cout << "SETXOR: {}" << endl;
	}

	return m_set;
}
set<int> CIsmember::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	int num = (*it)->Eval();
	advance(it, 1);
	set<int> id = (*it)->EvalSet(), m_set = {};

	for(set<int>::iterator itr = id.begin(); itr != id.end(); itr++) {
		if (num == *itr) {
			cout << "Yes the number "<< num <<" exist in the set"<< endl;
			return m_set;
		}
	}
	cout << "The number " << num << " does not exist in the set: " << endl;

	return m_set;
} 
set<int> CSetdiff::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	bool flag = false;
	int num;

	set<int> id1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> id2 = (*it)->EvalSet(), m_set;

	//emfanise oti yparxei sto A kai oxi sto B

	for (set<int>::iterator it = id1.begin(); it != id1.end(); it++) {
		for (set<int>::iterator it2 = id2.begin(); it2 != id2.end(); it2++) {
			num = *it;
			if (*it == *it2) { 
				flag = true; 
				break; 
			}
		}
		if (!flag)
			m_set.insert(num);
		flag = false;
	}

	if (m_set.size() != 0) {
		cout << "SETDIFF: {";
		for (set<int>::iterator it = m_set.begin(); it != m_set.end(); it++) {
			printf("%d,", *it);
		}
		cout << "\b}" << endl;
	}
	else {
		cout << "SETDIFF: {}" << endl;
	}


	return m_set;
} //not done yet


set<int> CAdd::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> result;
	set<int> set1=(*it)->EvalSet();
	advance(it, 1);
	set<int> set2 = (*it)->EvalSet();
	if (set1.size() == 0 )return set2;
	if (set2.size() == 0)return set1;

	for (set<int>::iterator itr =set1.begin(); itr != set1.end(); itr++) {
		for (set<int>::iterator itr2 = set2.begin(); itr2 != set2.end(); itr2++) {
			int num = *itr + *itr2;
			result.insert(num);
		}
	}
	return result;
}

set<int> CMult::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> result;
	set<int> set1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> set2 = (*it)->EvalSet();
	if (set1.size() == 0 || set2.size()==0)return result;

	for (set<int>::iterator itr = set1.begin(); itr != set1.end(); itr++) {
		for (set<int>::iterator itr2 = set2.begin(); itr2 != set2.end(); itr2++) {
			result.insert((*itr)*(*itr2));
			
		}
	}
	return result;
}
set<int> CDiv::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> result;
	set<int> set1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> set2 = (*it)->EvalSet();
	if (set1.size() == 0)return set2;
	if (set2.size() == 0)return set1;
	for (set<int>::iterator itr = set1.begin(); itr != set1.end(); itr++) {
		for (set<int>::iterator itr2 = set2.begin(); itr2 != set2.end(); itr2++) {
			if (*itr2 == 0) { printf("Error divede by 0 "); exit(1);}
			int num = *itr / *itr2;
			result.insert(num);
		}
	}
	return result;
}
set<int> CMinus::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> result;
	set<int> set1 = (*it)->EvalSet();
	advance(it, 1);
	set<int> set2 = (*it)->EvalSet();
	if (set1.size() == 0)return set2;
	if (set2.size() == 0)return set1;
	for (set<int>::iterator itr = set1.begin(); itr != set1.end(); itr++) {
		for (set<int>::iterator itr2 = set2.begin(); itr2 != set2.end(); itr2++) {
			int num = *itr - *itr2;
			result.insert(num);
		}
	}
	return result;
}
set<int> CPlusplus::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	set<int> result;
	set<int> set1 = (*it)->EvalSet();
	for (set<int>::iterator itr = set1.begin(); itr != set1.end(); itr++) {
		result.insert(*itr + 1);
	}
	return result;
}

set<int> CIFStatement::EvalSet() {
	list<STNode*>::iterator it = m_children->begin();
	if (m_children->size() == 2) {
		if ((*it)->Eval())
		{
			advance(it, 1);
			(*it)->EvalSet();
		}
	}
	else {
		if ((*it)->Eval())
		{
			advance(it, 1);
			(*it)->EvalSet();
		}
		else {
			advance(it, 2);
			(*it)->EvalSet();
		}
	}
	return {};
}
//set<int> CWhileStatement::EvalSet() {
//	list<STNode*>::iterator it_child1 = m_children->begin();
//	list<STNode*>::iterator it_child2 = m_children->begin();
//	advance(it_child2, 1);
//	(*it_child2)->Eval();
//	while ((*it_child1)->Eval()) {
//		if (break_status) {
//			break;
//		}
//		(*it_child2)->EvalSet();
//		(*it_child2)->Eval();
//	}
//	return {};
//}
set<int> CBreakStatement::EvalSet() {
	break_status = true;
	return {};
}