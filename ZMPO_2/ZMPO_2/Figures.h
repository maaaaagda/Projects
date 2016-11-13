#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <algorithm>

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
	bool operator == (CPoint2D v);
	void operator =(CPoint2D p);
	
};
double distance(CPoint2D p1, CPoint2D p2);
class CRectangle
{
	
	CPoint2D point1;
	CPoint2D point2;
	

public:
	CRectangle(double dX1, double dY1, double dX2, double dY2):point1(std::min(dX1, dX2), std::min(dY1, dY2)), point2(std::max(dX1, dX2), std::max(dY1, dY2)) {}
	CRectangle(CPoint2D cPoint1, CPoint2D cPoint2):point1(std::min(cPoint1.getX(), cPoint2.getX()),	std::min(cPoint1.getY(), cPoint2.getY())),
		point2(std::max(cPoint1.getX(), cPoint2.getX()), std::max(cPoint1.getY(), cPoint2.getY())) {}
	CRectangle(CRectangle &cRectangle):point1(cRectangle.point1), point2(cRectangle.point2) {}
	CRectangle() : point1(0, 0), point2(1, 1) {}
	CPoint2D getPoint1();
	CPoint2D getPoint2();
	double dArea();
	std::string sShowRect();
	void operator +(CPoint2D p);
	void operator +(CRectangle r);
	void operator =(CRectangle p);
};


