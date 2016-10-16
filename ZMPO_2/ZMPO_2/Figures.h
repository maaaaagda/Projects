#pragma once
#include "stdafx.h"
#include "iostream"

class CCircle;
class CPoint;
int iDistance( CCircle *c,  CPoint *p);

class CCircle 
{
	int x;
	int y;
	int r;

public:
	CCircle(int x, int y, int r);
	friend int iDistance(const CCircle *c, const CPoint *p);
	int getX();
	int getY();
	int getR();

};
class CPoint
{
	int x;
	int y;
public:
	CPoint(int x, int y);
	friend int iDistance( CCircle *c,  CPoint *p);
	int getX();
	int getY();
};

