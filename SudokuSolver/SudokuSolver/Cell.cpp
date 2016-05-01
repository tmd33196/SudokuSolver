#include "Cell.h"

void Cell::setValue(int _value)
{
	value = _value;

	row->removeValue(_value);
	col->removeValue(_value);
	square->removeValue(_value);
}

bool Cell::isNumPossible(int value)
{
	return possibleValues[value - 1];
}

void Cell::setPossible(int value)
{
	possibleValues[value - 1] = false;
	numPossible--;

	if (numPossible == 1)
		for (int a = 0; a < 9; a++)
			if (possibleValues[a])
				setValue(a + 1);
}