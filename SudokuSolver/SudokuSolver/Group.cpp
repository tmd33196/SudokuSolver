#include "Group.h"

Group::Group(Cell *c1, Cell *c2, Cell *c3, Cell *c4, Cell *c5, Cell *c6, Cell *c7, Cell *c8, Cell *c9)
{
	cells[0] = c1;
	cells[1] = c2;
	cells[2] = c3;
	cells[3] = c4;
	cells[4] = c5;
	cells[5] = c6;
	cells[6] = c7;
	cells[7] = c8;
	cells[8] = c9;
}

void Group::removeValue(int value)
{
	for (Cell *cell : cells)
		cell->setPossible(value);
}

Cell* Group::getCell(int position)
{
	return cells[position];
}