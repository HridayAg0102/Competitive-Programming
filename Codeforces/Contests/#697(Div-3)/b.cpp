// Common sense question. Took a lot of time to solve it. Improve common sense.

#include <bits/stdc++.h>
using namespace std;

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