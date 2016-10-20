#include "stdafx.h"
#include "Figures.h"
#include "math.h"
using namespace std;

CRectangle::CRectangle(double x1, double y1, double x2, double y2)
{
	point1 = new CPoint2D(x1, y1);
	point2 = new CPoint2D(x2, y2);
}
CRectangle::CRectangle(CPoint2D *cPoint1, CPoint2D *cPoint2)
{
	point1 = cPoint1;
	point2 = cPoint2;
}

CRectangle::CRectangle(CRectangle &cRectangle)
{
	point1 = new CPoint2D(*cRectangle.point1);
	point2 = new CPoint2D(*cRectangle.point2);
}
double CRectangle::dArea()
{
	return abs(point1->getX() - point2->getX())*abs(point1->getY() - point2->getY());
}

void CRectangle::vInfo()
{
	cout << "CRectangle(CPoint(" << point1->getX() << "," << point1->getY() << ",CPoint(" << point2->getX() << "," << point2->getY() <<"))"<< endl;
}

CPoint2D::CPoint2D(double x, double y)
{
	dX = x;
	dY = y;
}
CPoint2D::CPoint2D(CPoint2D &cPointToCopy)
{
	dX = cPointToCopy.dX;
	dY = cPointToCopy.dY;
}
double CPoint2D::getX()
{
	return dX;
}
double CPoint2D::getY()
{
	return dY;
}


