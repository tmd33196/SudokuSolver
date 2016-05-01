#include "Group.h"

void Group::removeValue(int value)
{
	for (Cell *cell : cells)
		cell->setPossible(value);
}