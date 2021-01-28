// Bruteforce solution time limit exceed.
// Upsolve. Find a efficient solution.
// Write correct solution first.

/*-------------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;

	while(t--){
		long long int  a, b, n;
		cin >> a >> b >> n;
		long long int arr[n], brr[n], ans(0);
		for (int i = 0; i < n; i++) cin >> arr[i];
		for (int i = 0; i < n; i++) cin >> brr[i];

		for (int i = 0; i < n-1; i++){
			for (int j = i+1; j < n; j++){
				if((arr[i] != arr[j]) && (brr[i] != brr[j])) ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}

/*--------------------------------------------------------------------------------------------*/