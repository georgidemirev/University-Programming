// remont na plochki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double N, W, L , M , O;
	cout << "Vuvedi strana na kvadratnata ploshtadka: \n";
	cin >> N;
	cout << "Vuvedi shirochina na plochkite: \n";
	cin >> W;
	cout << "Vuvedi duljina na plochkite: \n";
	cin >> L;
	cout << "Vuvedi shirochina na peikata; \n";
	cin >> M;
	cout << "Vuvedi duljina na peikata: \n";
	cin >> O;
	if (N >= 1 && N <= 100 && W <= 10.00 && W >= 0.1 && L <= 10.00 && L >= 0.1 && M <= 10 && M >= 0 && O <= 10 && 0 >= 0) {
		double nujni_plochki = (N*N - M*O) / (W*L);
		cout << fixed << setprecision(2) << nujni_plochki << endl;
		cout << fixed << setprecision(2) << nujni_plochki*0.2 << endl;
	}
	else { cout << "greshka" << endl; }
    return 0;
}

