#include "Cell.h"
#include "Group.h"

int main()
{
	Group* row1 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row2 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row3 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row4 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row5 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row6 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row7 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row8 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());
	Group* row9 = new Group(new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell(), new Cell());

	Group* col1 = new Group(row1->getCell(0), row2->getCell(0), row3->getCell(0), row4->getCell(0), row5->getCell(0), row6->getCell(0), row7->getCell(0), row8->getCell(0), row9->getCell(0));
	Group* col2 = new Group(row1->getCell(1), row2->getCell(1), row3->getCell(1), row4->getCell(1), row5->getCell(1), row6->getCell(1), row7->getCell(1), row8->getCell(1), row9->getCell(1));
	Group* col3 = new Group(row1->getCell(2), row2->getCell(2), row3->getCell(2), row4->getCell(2), row5->getCell(2), row6->getCell(2), row7->getCell(2), row8->getCell(2), row9->getCell(2));
	Group* col4 = new Group(row1->getCell(3), row2->getCell(3), row3->getCell(3), row4->getCell(3), row5->getCell(3), row6->getCell(3), row7->getCell(3), row8->getCell(3), row9->getCell(3));
	Group* col5 = new Group(row1->getCell(4), row2->getCell(4), row3->getCell(4), row4->getCell(4), row5->getCell(4), row6->getCell(4), row7->getCell(4), row8->getCell(4), row9->getCell(4));
	Group* col6 = new Group(row1->getCell(5), row2->getCell(5), row3->getCell(5), row4->getCell(5), row5->getCell(5), row6->getCell(5), row7->getCell(5), row8->getCell(5), row9->getCell(5));
	Group* col7 = new Group(row1->getCell(6), row2->getCell(6), row3->getCell(6), row4->getCell(6), row5->getCell(6), row6->getCell(6), row7->getCell(6), row8->getCell(6), row9->getCell(6));
	Group* col8 = new Group(row1->getCell(7), row2->getCell(7), row3->getCell(7), row4->getCell(7), row5->getCell(7), row6->getCell(7), row7->getCell(7), row8->getCell(7), row9->getCell(7));
	Group* col9 = new Group(row1->getCell(8), row2->getCell(8), row3->getCell(8), row4->getCell(8), row5->getCell(8), row6->getCell(8), row7->getCell(8), row8->getCell(8), row9->getCell(8));

	Group* sq1 = new Group(row1->getCell(0), row1->getCell(1), row1->getCell(2), row2->getCell(0), row2->getCell(1), row2->getCell(2), row3->getCell(0), row3->getCell(1), row3->getCell(2));
	Group* sq2 = new Group(row1->getCell(3), row1->getCell(4), row1->getCell(5), row2->getCell(3), row2->getCell(4), row2->getCell(5), row3->getCell(3), row3->getCell(4), row3->getCell(5));
	Group* sq3 = new Group(row1->getCell(6), row1->getCell(7), row1->getCell(8), row2->getCell(6), row2->getCell(7), row2->getCell(8), row3->getCell(6), row3->getCell(7), row3->getCell(8));
	Group* sq4 = new Group(row4->getCell(0), row4->getCell(1), row4->getCell(2), row5->getCell(0), row5->getCell(1), row5->getCell(2), row6->getCell(0), row6->getCell(1), row6->getCell(2));
	Group* sq5 = new Group(row4->getCell(3), row4->getCell(4), row4->getCell(5), row5->getCell(3), row5->getCell(4), row5->getCell(5), row6->getCell(3), row6->getCell(4), row6->getCell(5));
	Group* sq6 = new Group(row4->getCell(6), row4->getCell(7), row4->getCell(8), row5->getCell(6), row5->getCell(7), row5->getCell(8), row6->getCell(6), row6->getCell(7), row6->getCell(8));
	Group* sq7 = new Group(row7->getCell(0), row7->getCell(1), row7->getCell(2), row8->getCell(0), row8->getCell(1), row8->getCell(2), row9->getCell(0), row9->getCell(1), row9->getCell(2));
	Group* sq8 = new Group(row7->getCell(3), row7->getCell(4), row7->getCell(5), row8->getCell(3), row8->getCell(4), row8->getCell(5), row9->getCell(3), row9->getCell(4), row9->getCell(5));
	Group* sq9 = new Group(row8->getCell(6), row7->getCell(7), row7->getCell(8), row8->getCell(6), row8->getCell(7), row8->getCell(8), row9->getCell(6), row9->getCell(7), row9->getCell(8));
}