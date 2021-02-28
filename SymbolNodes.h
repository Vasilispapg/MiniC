#pragma once
#include "STNode.h"


class CCompileUnit : public STNode {
public:
	CCompileUnit();
	virtual ~CCompileUnit();
	void Visit_SyntaxTreePrinter(ofstream* dotfile, STNode* parent) override;
};

class CStatements : public STNode {
public:
	CStatements();
	virtual ~CStatements();

};

class CStatement : public STNode {
public:
	CStatement();
	virtual ~CStatement();
};

class CCompoundStatement : public STNode {
public:
	CCompoundStatement();
	virtual ~CCompoundStatement();
};


class CIFStatement : public STNode {
public:
	CIFStatement();
	virtual ~CIFStatement();
	int Eval() override;

};

class CWhileStatement : public STNode {
public:
	CWhileStatement();
	virtual ~CWhileStatement();
	int Eval() override;
};

class CAdd : public STNode {
public:
	CAdd();
	virtual ~CAdd();
	int Eval() override;
	set<int> EvalSet() override;


};
class CPlusplus : public STNode {
public:
	CPlusplus();
	virtual ~CPlusplus();
	int Eval() override;
	set<int> EvalSet() override;

};

class CMinus : public STNode {
public:
	CMinus();
	virtual ~CMinus();
	int Eval() override;
	set<int> EvalSet() override;

};
class CMult : public STNode {
public:
	CMult();
	virtual ~CMult();
	int Eval() override;
	set<int> EvalSet() override;

};
class CDiv : public STNode {
public:
	CDiv();
	virtual ~CDiv();
	int Eval() override;
	set<int> EvalSet() override;

};
class CNUMBER : public STNode {
public:
	CNUMBER(char* text);
	int m_number;
	virtual ~CNUMBER();
	int Eval() override;
	set<int> EvalSet() override;

};

class CIDENTIFIER : public STNode {
public:
	int m_number;
	string m_name;
	set<int> m_set;
	CIDENTIFIER(char* text);
	virtual ~CIDENTIFIER();
	int Eval() override;
	set<int> EvalSet() override;

};

class CAssignment : public STNode {
public:
	CAssignment();
	virtual ~CAssignment();
	int Eval() override;

};

class CAssignmentForSet : public STNode {
public:
	CAssignmentForSet();
	virtual ~CAssignmentForSet();
	set<int> EvalSet() override;

};

class CAnd : public STNode {
public:
	CAnd();
	virtual ~CAnd();
	int Eval() override;

};
class COr : public STNode {
public:
	COr();
	virtual ~COr();
	int Eval() override;

};
class CNot : public STNode {
public:
	CNot();
	virtual ~CNot();
	int Eval() override;

};
class CLt : public STNode {
public:
	CLt();
	virtual ~CLt();
	int Eval() override;

};
class CGt : public STNode {
public:
	CGt();
	virtual ~CGt();
	int Eval() override;

};
class CGte : public STNode {
public:
	CGte();
	virtual ~CGte();
	int Eval() override;

};
class CLte : public STNode {
public:
	CLte();
	virtual ~CLte();
	int Eval() override;

};
class CEqual : public STNode {
public:
	CEqual();
	virtual ~CEqual();
	int Eval() override;

};
class CNequal : public STNode {
public:
	CNequal();
	virtual ~CNequal();
	int Eval() override;

};

class CBreakStatement : public STNode {
public:
	CBreakStatement();
	virtual ~CBreakStatement();
	int Eval() override;
};

class CFunction : public STNode {
public:
	CFunction();
	virtual ~CFunction();
	int Eval() override;
};

class CArguments : public STNode {
public:
	CArguments();
	virtual ~CArguments();
	int Eval() override;
	set<int> EvalSet() override;

};
 
class CSet : public STNode {
public:
	CSet();
	virtual ~CSet();
//	int Eval() override;
	set<int> EvalSet() override;


};

class CFormalArgs : public STNode {
public:
	CFormalArgs();
	virtual ~CFormalArgs();
};

class CUnion : public STNode {
public:
	CUnion();
	virtual ~CUnion();
	set<int> EvalSet() override;
};

class CUnique : public STNode {
public:
	CUnique();
	virtual ~CUnique();
	set<int> EvalSet() override;
};

class CSetxor : public STNode {
public:
	CSetxor();
	virtual ~CSetxor();
	set<int> EvalSet() override;
};
class CIsmember : public STNode {
public:
	CIsmember();
	virtual ~CIsmember();
	set<int> EvalSet() override;
};
class CSetdiff : public STNode {
public:
	CSetdiff();
	virtual ~CSetdiff();
	set<int> EvalSet() override;
};
