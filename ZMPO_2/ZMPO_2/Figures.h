#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>

class CRectangle;


class CPoint2D
{

	double  *dX;
	double  *dY;
public:
	CPoint2D(double dX, double dY);
	CPoint2D(CPoint2D &cPointToCopy);
	~CPoint2D();
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);
	std::string sShowPoint();
	bool operator ==(CPoint2D v);
	void operator =(CPoint2D p);
	
};
double distance(CPoint2D p1, CPoint2D p2);
class CRectangle
{
	
	CPoint2D point1;
	CPoint2D point2;
	

public:
	CRectangle(double dX1, double dY1, double dX2, double dY2):point1(dX1, dY1), point2(dX2, dY2) {}
	CRectangle(CPoint2D cPoint1, CPoint2D cPoint2):point1(cPoint1), point2(cPoint2) {}
	CRectangle(CRectangle &cRectangle):point1(cRectangle.point1), point2(cRectangle.point2) {}
	CRectangle() : point1(0, 0), point2(1, 1) {}
	CPoint2D getPoint1();
	CPoint2D getPoint2();
	double dArea();
	std::string sShowRect();
	void operator +(CPoint2D p);
	void operator +(CRectangle r);
};


