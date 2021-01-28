// Simple problem can be solved just by making cases.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char a[n], b[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		b[0] = '1';
		for (int i = 0; i < n-1; i++){
			if (a[i] == '0' && b[i] == '0'){
				if (a[i+1] == '1') b[i+1] = '1';
				else if (a[i+1] == '0') b[i+1] = '1';
			}
			else if (a[i] == '0' && b[i] == '1'){
				if (a[i+1] == '0') b[i+1] = '0';
				else if (a[i+1] == '1') b[i+1] = '1';
			}
			else if (a[i] == '1' && b[i] == '0'){
				if (a[i+1] == '1') b[i+1] = '1';
				else if (a[i+1] == '0') b[i+1] = '0';
			}
			else if (a[i] == '1' && b[i] == '1'){
				if (a[i+1] == '0') b[i+1] = '1';
				else if (a[i+1] == '1') b[i+1] = '0';
			}

		}

		for (int i = 0; i < n; i++) cout << b[i];
		cout << endl;

	}


	return 0;
}