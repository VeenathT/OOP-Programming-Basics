#include <iostream>
#include "Square.h"

using namespace std;

void Square::setLength(double l) {
	length = l;
}

double Square::getLength() {
	return length;
}

double Square::calcArea() {
	return length * length;
}