// kvadrat ot zvezdichki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double w, h;
	cin >> h;
	cin >> w;
	int broi_duljina = floor(h / 1.2);
	int broi_shirochina = floor(w / 0.7) - 1;
	int broi_bura = broi_duljina * broi_shirochina - 3;
	if (3 <= h && h <=w && w<=100 ) {
		cout << broi_bura << endl;
	}
	else { cout << "greshka!"; }
	return 0;
}

