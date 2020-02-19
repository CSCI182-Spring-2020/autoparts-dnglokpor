#pragma once

#include<iostream>
#include "Autopart.h"

using namespace std;

class EnginePart : AutoPart // derived from AutoPart
{
private:
	int _EngineSpecNo;
public:
	EnginePart(); // default constructor
	EnginePart(int PartNo, string PartDescription, int PartMaker, int EngineSpecNo); // custom constructor
	~EnginePart(); // destructor

	// member functions
	void PrintEnginePart();

};

