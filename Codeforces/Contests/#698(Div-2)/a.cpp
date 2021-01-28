// Variation of the most frequent number in the array.  

#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n) 
{ 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
  
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 

int main()
{	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n], ans(0);
		for (int i = 0; i < n; i++) cin >> arr[i];

		int temp = mostFrequent(arr, n);
		for (int i = 0; i < n; i++) if(arr[i] == temp) ans++;

		cout << ans << endl;


	}

	return 0;
}