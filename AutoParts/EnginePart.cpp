#pragma once

#include <iostream>
#include "EnginePart.h"

using namespace std;

/// <summary>
/// Instantiate an empty EnginePart
/// </summary>
EnginePart::EnginePart() {
	cout << "In EnginePart Constructor: ";
}

/// <summary>
/// Instantiate an EnginPart that has a BasePart number, an AutoPart description,
/// and a spec number
/// </summary>
/// <param name="PartNo"></param>
/// <param name="PartDescription"></param>
/// <param name="PartMaker"></param>
/// <param name="EngineSpecNo"></param>
EnginePart::EnginePart(int PartNo, string PartDescription, int PartMaker, int EngineSpecNo)
	:AutoPart(PartNo, PartDescription, PartMaker) {
	_EngineSpecNo = EngineSpecNo;
	cout << "In EnginePart Constructor: ";
	PrintEnginePart();
}

/// <summary>
/// Destroy any instance of EnginePart
/// </summary>
EnginePart::~EnginePart() {
	cout << "In EnginePart destructor: ";
	PrintEnginePart();
}

/// <summary>
/// Print the EnginePart BasePart number, Autopart maker ID and description and engine spec number
/// </summary>
void EnginePart::PrintEnginePart() {
	cout << _EngineSpecNo << "\t";
	AutoPart::PrintPart();
}

