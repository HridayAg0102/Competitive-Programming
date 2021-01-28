// Upolve. Solve this question and give solution above the given one.

/*--------------------------------------------------------------------------------------------------*/

// This solution gives correct ans but time limit exceeded. Need to find the solution.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
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
	long long int n;
	cin >> n;

	while(n--){
		long long int t, ans(0);
		cin >> t;
		for (long long int i = 1; i <= t; i++){
			if (isPrime(i)){
				if(isPrime(i+2)){
					ans++;
				}
			}
		}
		cout << ans << endl;

	}

}

/*---------------------------------------------------------------------------------------------------------*/
