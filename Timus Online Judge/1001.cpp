// Problem of recursion was able to do it after sanket sir 1st resursion class.
// Remember the example of plate stacking the first input is stacked to the last.

#include <bits/stdc++.h>
using namespace std;

void reverseRoot(){
	long long int n;
	while (cin >> n){
		reverseRoot();
		cout << fixed << setprecision(4) << sqrt(n) << endl;
	}
}

int main()
{	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	reverseRoot();
	return 0;
}