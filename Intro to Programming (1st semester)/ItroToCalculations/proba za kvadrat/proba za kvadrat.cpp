// proba za kvadrat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int h;
	cin >> h;
	for (int i = 1; i <= h; i++) {
		cout << "* ";
	}
	cout << endl;
	for (int i = 1; i <= h-2; i++)
	{	
		cout << "*";
		for (int i = 1; i <= h-2; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (int i = 1; i <= h; i++) {
		cout << "* ";
	}
	return 0;
}

