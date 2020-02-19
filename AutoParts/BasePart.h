#pragma once

#include <iostream>

using namespace std;

class BasePart
{
private:
protected:
	int _PartNo = 0;
public:
	BasePart(); // default constructor
	BasePart(int PartNo); // custom constructor
	virtual ~BasePart(); // destructor
};

