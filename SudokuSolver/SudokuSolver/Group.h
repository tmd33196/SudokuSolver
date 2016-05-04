#pragma once
#include "Cell.h"
using namespace std;
class Group
{

private:
	Cell *cells[9];

public:
	Group(Cell *c1, Cell *c2, Cell *c3, Cell *c4, Cell *c5, Cell *c6, Cell *c7, Cell *c8, Cell *c9);

	void removeValue(int value);
	Cell* getCell(int position);

};