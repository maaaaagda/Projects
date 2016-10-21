// ZMPO_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "sstream"
#include <vector>
#include <string>
#include "Figures.h"


using namespace std;
string createPoint(CPoint2D **CPointTab,  int position, double x1, double y1)
{
	CPointTab[position] = new CPoint2D(x1, y1);
	return "DONE";
}
string createPointCopy(CPoint2D **CPointTab, int pointCopyPos,int pointPos)
{
	CPointTab[pointCopyPos] = new CPoint2D(*CPointTab[pointPos]);
	return "DONE";
}
string setPoint(CPoint2D **CPointTab, int pointPos, double x1, double y1)
{
	CPointTab[pointPos]->setX(x1);
	CPointTab[pointPos]->setY(y1);
	return "DONE";
}
string getPointX(CPoint2D **CPointTab, int pointPos)
{
	return to_string(CPointTab[pointPos]->getX());
	
}
string getPointY(CPoint2D **CPointTab, int pointPos)
{
	return to_string(CPointTab[pointPos]->getY());

}
string createRectDouble(CRectangle **CRectangleTab, int rectPos, double x1, double y1, double x2, double y2)
{
	CRectangleTab[rectPos] = new CRectangle(x1, y1, x2, y2);
	return "DONE";
}
string createRectPoints(CPoint2D **CPointTab, CRectangle **CRectangleTab, int rectPos, int point1Pos, int point2Pos)
{
	CRectangleTab[rectPos] = new CRectangle(CPointTab[point1Pos], CPointTab[point2Pos]);
	return "DONE";
}
string createRectCopy(CRectangle **CRectangleTab, int rectCopyPos, int rectPos)
{
	CRectangleTab[rectCopyPos] = new CRectangle(*CRectangleTab[rectPos]);
	return "DONE";
}
string fieldRect(CRectangle **CRectangleTab, int rectPos)
{
	return to_string(CRectangleTab[rectPos]->dArea());
}
string showRect(CRectangle **CRectangleTab, int rectPos)
{
	(CRectangleTab[rectPos])->vInfo();
	return "DONE";
}

int main()
{
	int nrOfPoints = 10;
	int nrOfRectangles = 10;
	/*
	CPoint2D **CPointTab;
	CRectangle **CRectangleTab;
	*/
	CPoint2D **CPointTab = new CPoint2D*[nrOfPoints];
	CRectangle **CRectangleTab = new CRectangle*[nrOfRectangles];
	

	cout << "commend plizzz: " << endl;
	bool exit = false;
	
	vector<string> words;
	string text;	
	
	do
	{
		words.clear();
		getline(cin, text);
		string::size_type beg = 0, end;
		do {
			end = text.find(' ', beg);
			if (end == string::npos) {
				end = text.size();
			}
			words.emplace_back(text.substr(beg, end - beg));
			beg = end + 1;
		} while (beg < text.size());

		
		
			if (words[0] == "!go")
			{
				try
				{
					nrOfPoints = stoi(words[1]);
					nrOfRectangles = stoi(words[2]);
					CPointTab = new CPoint2D*[nrOfPoints];
					CRectangleTab = new CRectangle*[nrOfRectangles];
					cout << "DONE" << endl;

				}

				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}

			}
			else if (words[0] == "!createPoint")
			{
				try
				{
					int position = stoi(words[1]);
					double x = stod(words[2]);
					double y = stod(words[3]);
					if (position >= 0 && position < nrOfPoints)
					{
						cout << createPoint(CPointTab, position, x, y) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!setPoint")
			{
				try
				{
					int pointPos = stoi(words[1]);
					double x = stod(words[2]);
					double y = stod(words[3]);
					if (pointPos >= 0 && pointPos  < nrOfPoints)
					{
						cout << setPoint(CPointTab, pointPos, x, y) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!getPointX")
			{
				try
				{
					int pointPos = stoi(words[1]);
					if (pointPos >= 0 && pointPos  < nrOfPoints)
					{
						cout << getPointX(CPointTab, pointPos) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!getPointY")
			{
				try
				{
					int pointPos = stoi(words[1]);
					if (pointPos >= 0 && pointPos  < nrOfPoints)
					{
						cout << getPointY(CPointTab, pointPos) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!createPointCopy")
			{
				try
				{
					int pointCopyPos = stoi(words[1]);
					int pointPos = stoi(words[2]);
					if (pointCopyPos >= 0 && pointCopyPos < nrOfPoints )
					{
						cout << createPointCopy(CPointTab, pointCopyPos, pointPos) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!createRectDouble")
			{
				try
				{
					int rectPos = stoi(words[1]);
					double x1 = stod(words[2]);
					double y1 = stod(words[3]);
					double x2 = stod(words[4]);
					double y2 = stod(words[5]);
					if (rectPos >= 0 && rectPos < nrOfRectangles)
					{
						cout << createRectDouble(CRectangleTab, rectPos, x1, y1, x2, y2) << endl;
					}
					else cout << "ERROR"<<endl;

				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!createRectPoints")
			{
				try
				{
					int rectPos = stoi(words[1]);
					int point1Pos = stoi(words[2]);
					int point2Pos = stoi(words[3]);
					if (rectPos >= 0 && rectPos < nrOfRectangles && point1Pos >= 0 && point1Pos < nrOfPoints
						&& point2Pos >= 0 && point2Pos < nrOfPoints)
					{
						cout << createRectPoints(CPointTab, CRectangleTab, rectPos, point1Pos, point2Pos) << endl;
					}
					else cout << "ERROR" << endl;

				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!createRectCopy")
			{
				try
				{
					int rectCopyPos = stoi(words[1]);
					int rectPos = stoi(words[2]);
					if (rectCopyPos >= 0 && rectCopyPos  < nrOfRectangles)
					{
						cout << createRectCopy(CRectangleTab, rectCopyPos, rectPos) << endl;
					}
					else cout << "ERROR" << endl;
				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!showRect")
			{
				try
				{
					int rectPos = stoi(words[1]);
					if (rectPos >= 0 && rectPos < nrOfRectangles )
					{
						cout << showRect(CRectangleTab, rectPos) << endl;
					}
					else cout << "ERROR" << endl;

				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!fieldRect")
			{
				try
				{
					int rectPos = stoi(words[1]);
					if (rectPos >= 0 && rectPos < nrOfRectangles)
					{
						cout << fieldRect(CRectangleTab, rectPos) << endl;
					}
					else cout << "ERROR" << endl;

				}
				catch (invalid_argument e)
				{
					cout << "ERROR" << endl;
				}
			}
			else if (words[0] == "!exit")
			{
				exit = true;
			}
			
	} while (!exit);
	
	getchar();
	return 0;
}

/*
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
*/