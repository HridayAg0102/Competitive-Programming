// Upsolved
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n , k;
		cin >> n >> k;
		if (n>=k){
			if (n%k == 0) cout << 1 << "\n"; // When n >= k then minimum possible max number is either 1 if n%k==0 else 2 
			else cout << 2 << "\n";
		}
		else{
			if (k%n == 0) cout << k/n << "\n";
			else cout << k/n+1 << "\n";
			// When n < k then the minimum possible max number is k/n(if k%n == 0) else k/n+1
		}
	}

	return 0;
}