
/*
CSCI 182
AutoParts.cpp
Builds a class to describe auto cars

Brett Huffman
v 1.0
*/

#include <iostream>
#include "Autopart.h"
#include "BasePart.h"
#include "EnginePart.h"

int main()
{
    // Create part on the stack
    cout << "Creating on the stack: " << endl;
    EnginePart part = EnginePart(5, "Steering Wheel", 243, 33); // instance of Autopart class
    part.PrintEnginePart();

    // Create part on the heap
    cout << "Creating on the heap: " << endl;
    EnginePart *pHeapPart = new EnginePart(6, "Gear Shift", 500, 55);
    pHeapPart->PrintEnginePart();

    cout << "Using delete on heap object: " << endl;
    delete pHeapPart;
    
    cout << "Going out of main() scope: " << endl;
}
