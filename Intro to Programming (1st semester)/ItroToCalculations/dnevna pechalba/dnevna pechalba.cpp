// dnevna pechalba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	int n; // dni v meseca
	double m;// dolara na den
	double d; // kurs na dolara
	cin >> n >> m >> d;
	double mesechna = n * m;
	double bonus = mesechna  * 2.5;
	double danuk = (mesechna+bonus/12) * 3;
	double obshto_godnishna = mesechna * 12 - danuk + bonus;
	double na_den = obshto_godnishna / 365;
		if (n >= 5 && n <= 30 && m >= 10.00 && m <= 2000.00 && d <= 1.99 && d >= 0.99) {
			cout <<fixed << setprecision(2) << na_den*d << endl;
		}
    return 0;
}

