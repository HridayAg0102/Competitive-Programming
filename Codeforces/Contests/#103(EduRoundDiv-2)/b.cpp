// Upsolved

typedef long long int ll;
#include <bits/stdc++.h>
using namespace std;

// Function for cummlative sum in a array.
// Made cummlatuve sum because it is easy to calculate inflation like this.
ll cumsum(ll n, ll arr[], ll arr2[]){
	for (int i = 0; i < n ; i++) arr2[i] = arr[i];
	for (int i = 1; i < n; i++){
		arr2[i] += arr2[i-1];
	}
	return 0;
}

int main()

{
	int t;
	cin >> t;
	while(t--){
		ll n , k;
		cin >> n >> k;
		ll arr[n], arr2[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			arr2[i] = arr[i];
		}
		// Maintained 2 array one of cummlative sum and other original and did changes to original array first element
		cumsum(n, arr, arr2); // according to the question and then fed it to cumsum.
		ll temp(arr[0]); // Keep a copy of original first element because we made changes in original only.
		for (int i = 1; i < n; i++){
			if (static_cast<double>(arr[i])/arr2[i-1] <= static_cast<double>(k)/100) continue;
			else {
				if ((arr[i]*100-k*arr2[i]) % k == 0){
					arr[0] += (arr[i]*100-k*arr2[i-1]) / k;
					cumsum(n, arr, arr2);
				}
				else {
					arr[0] += (arr[i]*100-k*arr2[i-1]) / k + 1;
					cumsum(n, arr, arr2);
				}
			}
		}

		cout << arr2[0] - temp << endl; 
		// To get the sum of change to keep below the inflation rate (k) subtract the cumsum first element and original first element.
	}

	return 0;
}