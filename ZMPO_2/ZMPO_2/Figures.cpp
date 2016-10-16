#include "stdafx.h"
#include "Figures.h"
#include "math.h"


CCircle::CCircle(int a, int b, int c)
{
	x = a;
	y = b;
	r = c;
}
int CCircle::getX()
{
	return x;
}
int CCircle::getY()
{
	return y;
}
int CCircle::getR()
{
	return r;
}
CPoint::CPoint(int a, int b)
{
	x = a;
	y = b;
}
int CPoint::getX()
{
	return x;
}
int CPoint::getY()
{
	return y;
}
int iDistance(CCircle *c,  CPoint *p)
{
	//return c->getR();
	return abs (c->getR() - sqrt( pow((p->getX() - c->getX()),2) + pow((p->getY() - c->getY()),2)));
}

