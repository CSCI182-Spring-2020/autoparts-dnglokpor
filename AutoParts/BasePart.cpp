#pragma once

#include <iostream>
#include "BasePart.h"

using namespace std;

/// <summary>
/// Instantiate an empty BasePart
/// </summary>
BasePart::BasePart() {
	cout << "In BasePart Constructor: " << _PartNo << endl;
};

/// /// <summary>
/// Instantiate a BasePart that has a part number
/// </summary>
/// <param name="PartNo"></param>
BasePart::BasePart(int PartNo) {
	_PartNo = PartNo;
	cout << "In BasePart Constructor: " << _PartNo << endl;
};

/// /// <summary>
/// destroy any instance of BasePart
/// </summary>
BasePart::~BasePart() {
	cout << "In BasePart Destructor: " << _PartNo << endl;
}