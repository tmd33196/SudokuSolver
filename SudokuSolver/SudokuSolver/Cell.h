#pragma once
#include "Group.h"

class Cell
{

private:
	int value;
	int numPossible;
	bool possibleValues[9];

	Group *row;
	Group *col;
	Group *square;

	int getNumPossible() { return numPossible; }
	void setNumPossible(int _numPossible) { numPossible = _numPossible; }

public:
	Cell();

	int getValue() { return value; }
	void setValue(int _value);

	bool isNumPossible(int value);
	void setPossible(int value);

};