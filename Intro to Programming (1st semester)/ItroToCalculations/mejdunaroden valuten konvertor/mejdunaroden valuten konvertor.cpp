// mejdunaroden valuten konvertor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	double BGN, USD, EUR, GBP, a;
	string valuta;
	string valuta_2;
	cout << "Vuvedi valuta za konvertirane(nalichni sa BGN,USD,EUR,GBP): " << endl;
	cin >> valuta;
	if ( valuta == "BGN" ) {
		cout << "vuvedi valutata v koqto iskate da konvertirate:" << endl;
		cin >> valuta_2;
		if (valuta_2 == "USD") {
			cout << "vuvedi suma za konvertirane: " << endl;
			cin >> a;
			cout << a * 1.7954 << endl;
		}
	}
	
	return 0;

}

