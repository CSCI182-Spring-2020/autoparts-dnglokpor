#pragma once

#include <iostream>
#include "BasePart.h"

using namespace std;

class AutoPart : BasePart // derived from BasePart
{
protected:
	string _PartDescription = "";
	int _PartMaker = 0;
public:
	AutoPart(); // default constructor
	AutoPart(int PartNo, string PartDescription, int PartMaker); // custom constructor
	virtual ~AutoPart(); // destructor
	
	//member functions
	void PrintPart();

};

