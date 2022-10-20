#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int k, N;
	double S;

	cout << "k = "; cin >> k;
	
	S = 0;
	N = k;
	while (N <= 19)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		N++;
	}
	cout << S << endl;

	S = 0;
	N = k;
	do {
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		N++;
	} while (N <= 19);
	cout << S << endl;

	S = 0;
	for (N = k; N <= 19; N++)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;

	S = 0;
	for (N = 19; N >= k; N--)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;

	return 0;
}
