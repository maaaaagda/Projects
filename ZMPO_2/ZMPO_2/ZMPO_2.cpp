// ZMPO_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Figures.h"


using namespace std;
int main()
{
	
	CPoint2D *p1 = new CPoint2D(3.5, 4.5);
	CPoint2D *p2 = new CPoint2D(7.5, 8.5);
	CPoint2D *p3 = new CPoint2D(*p2);
	CRectangle *c1 = new CRectangle(p1, p3);
	CRectangle *c2 = new CRectangle(3.5,4.5,7.5,8.5);
	c1->vInfo();
	cout << c1->dArea() << endl;

	c2->vInfo();
	cout << c2->dArea() << endl;
	cout << "what";;
	
	getchar();
	return 0;
}

