// zelenchukova borsa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double N, M;
	int z, p;
	cout << "vuvedi cena za kilogram na zelenchucite: \n";
		cin >> N;
	cout << "vuvedi cena za kilogram na plodovete: \n";
		cin >> M;
	cout << "vuvedi kolko kilograma sa zelenchucite ( kato cqlo chislo): \n";
		cin >> z;
	cout << "vuvedi kolko kilograma sa plodovete ( kato cqlo chislo): \n";
		cin >> p;
		double valuta = 1.94;
		double q = N / valuta * z + M / valuta * p;
		cout << fixed << setprecision(2) << q << endl;
						
    return 0;
}

