#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double z(const double x);


int main()
{
	double pp, pk, a;
	int n;

	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;

	double dp = (pk - pp) / n;

	double p = pp;

	cout << "----------------------------------" << endl;
	cout << "|" << setw(5) << "p" << setw(2) << "|" << setw(10) << "a" << setw(2) << "|" << endl;
	cout << "----------------------------------" << endl;

	while (p <= pk)
	{
		a = z(p * p) + 2 * z(2 * p + p * p) + 1;
		cout << "|" << setw(5) << p << setw(2) << "|" << setw(10) << a << setw(2) << "|" << endl;
		p += dp;
	}
	cout << "----------------------------------" << endl;
}

double z(const double x)
{
	if (abs(x) >= 1)
		return ((cos(2 * x) + 1) / (cos(x) + sin(x) * sin(x)));
	else {
		int k = 0;
		double a = (2 * x) / 1.;
		double S = a;
		do
		{
			k++;
			double R = (x * x) / ((2 * k + 1) * 2 * k);
			a *= R;
			S += a;

		} while (k < 6);
		return S;
	}
}