// Uchebna zala.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	double w, h; // h - duljina , w - shirochina
	cout << "Vuvedi duljina na zalata: \n";
	cin >> h;
	cout << "Vuvedi shirochina na zalata: \n";
	cin >> w;
	
	double x, y; // x-shirochina na buro - 70 sm y - 120sm
	x = 0.7;
	y = 1.2;
	int broi_duljina = floor(h / y) ;
	int broi_shirochina = floor(w / x) - 1;
	int broi_bura = broi_duljina * broi_shirochina  - 3;
		
	if (w >= 3 && w <= 100 && h>=3 && h<=100 && h >= w) {
		cout << broi_bura << endl;
	}
	else { 
		cout << "Greshka! Vuvedi chisla po-golemi ot 3 i po-malki ot 100!" << endl; 
	}

    return 0;
}

