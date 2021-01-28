#include <bits/stdc++.h>
using namespace std;

// Easy, variation of identifying prime number problem.

bool prime(int n){
	if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 

    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long int d, ans(1), i(0);
		cin >> d;
		int temp(1+d);

		while(i<2){
			if(prime(temp)==true && temp-ans>=d){
				ans = ans*temp;
				temp++;
				i++;
			}
			else temp++;
		}

		cout << ans << endl;
	}


	return 0;
}