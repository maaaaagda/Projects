// GlupieChary.cpp : Defines the entry point for the console application.
//

#include <string.h>
#include "stdafx.h"
#pragma warning(disable:4996)
using namespace std;
#include <iostream>
char * getname(void);


int main()
{
	char * name;
	name = getname();
	cout << name << "pod adresem: " <<(int *)name << endl;
//	delete[]name;
	cin >> name;
	getchar();
    return 0;
}
char * getname()
{
	char temp[80];
	cout << "Podaj nazwisko" << endl;
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}

