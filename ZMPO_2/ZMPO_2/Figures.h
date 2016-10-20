#pragma once
#include "stdafx.h"
#include "iostream"

class CRectangle;
class CPoint2D;


class CRectangle
{
	friend class CPoint2D;
	CPoint2D *point1;
	CPoint2D *point2;

public:
	CRectangle(double dX1, double dY1, double dX2, double dY2);
	CRectangle(CPoint2D *cPoint1, CPoint2D *cPoint2);
	CRectangle(CRectangle &cRectangle);
	double dArea();
	void vInfo();


};
class CPoint2D
{
	//friend class CRectangle;
	double  dX;
	double  dY;
public:
	CPoint2D(double dX, double dY);
	CPoint2D(CPoint2D &cPointToCopy);
	double getX();
	double getY();
};

