//============================================================================
// Name        : Duck_Example_Poly.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Duck duck_inst;
	FlyWithWings fly_inst;
	Quack quack_inst;
	duck_inst.flybehaviour = &fly_inst;
	duck_inst.quackbehaviour = &quack_inst;
	return 0;
}
