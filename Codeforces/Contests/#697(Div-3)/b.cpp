// Common sense question. Took a lot of time to solve it. Improve common sense.

#include <bits/stdc++.h>
using namespace std;

// Suppose a number n is given.
// n = x.2020 + y.2021
// n = (x+y).2020 + y
/* Now y is kind of remainder when n is divided by 2020 y has to less than n//2020 because
   then only it can be mixture of multiples of 2020 and 2021 */

int main()
{
	long long int t;
	cin >> t;

	while(t--){
		long long int n;
		cin >> n;
		long long int q(n/2020), r(n%2020);
		if(r<=q) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}