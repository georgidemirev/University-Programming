// parichki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int bitkoin = 1168;
	double dolar = 1.76;
	double kit = 0.15 * 1.76 ;
	double evro = 1.95;
	double broi_bit, broi_kit, komisionna;
	cin >> broi_bit >> broi_kit >> komisionna;
	double suma = broi_bit * bitkoin + broi_kit * kit ;
		if (broi_bit >= 0 && broi_kit >= 0.00 && broi_kit <= 50000.00 && broi_bit <= 20 && komisionna <= 50.00 && komisionna >= 0.00) {
			cout <<fixed << setprecision(2) << suma/evro - suma/evro/100*komisionna  << endl;
	}

    return 0;
}

