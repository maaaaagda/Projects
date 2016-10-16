// ZMPO_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Figures.h"


using namespace std;
int main()
{
	CCircle c =  CCircle(0, 0, 20);
	CPoint p = CPoint(3, 4);
	cout << "what";;
	cout << "Distance: " << iDistance(&c, &p) << endl;
	getchar();
	return 0;
}

