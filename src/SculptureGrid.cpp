//============================================================================
// Name        : SculptureGrid.cpp
// Author      : Michael Everette
// Version     :
// Copyright   : 
// Description : Process image to generate grid of blocks which will make up a sculpture.
//  Each block will be a rectangular prism of a particular length with one angled face.
//============================================================================

#include <iostream>
using namespace std;

#include "Block.h"


int main() {
	// Creating an object of Block class
	Block b(10.5, 30.0, 45.0);
	b.display();

	cout << "test" << endl; // prints test message
	return 0;
}
