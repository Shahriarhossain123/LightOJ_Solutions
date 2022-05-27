#include <bits/stdc++.h>
using namespace std;

/**
 * Returns  the number of problems stored in each computer.
 * @param n denotes the total number of problems.
 */

/**
 * Takes care of the problem input and output.
 */
int main()
{

	int t, a, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a;
		
		b = a / 2;
		a = a % 2 + a / 2;
		cout << a << " "<<b << endl;

	}		
	return 0;
}
