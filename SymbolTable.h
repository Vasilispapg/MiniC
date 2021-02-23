#pragma once
#include <string>
#include<map>
#include "SymbolNodes.h"

using namespace std;

class STNode;
class SymbolTable {
public:
	map<string, STNode*> m_symbolTable;

	STNode* getIdentifier(char* name);
};

extern SymbolTable g_symbolTable;
