// Easy question did silly mistakes it was div. 3 else there could have been heavy penalty.
// Be careful should have been able to solve these types of questions in 5 min.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;

	while(t--){
		long long int n;
		cin >> n;
		while(n>1){
			if(n%2==1){
				cout << "YES\n";
				break;
			}
			n = n/2;
		}
		if (n == 1) cout << "NO\n";
	}

	return 0;
}