#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	while(n--){
		long long int a, b;
		cin >> a >> b;
		long long int num = b-a+1;

		cout << num + num - 1 << endl;
	}

}