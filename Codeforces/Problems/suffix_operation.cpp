//Read the editorial for this check one for time and below is given coded solution.

#include <bits/stdc++.h>
using namespace std;

void compute(){
	int t; 
	cin >> t; 
	int arr[t];
	for (int i = 0; i < t; i++) cin >> arr[i];

	long long int ans(0);
	for (int i = 1; i < t; i++) ans += abs(arr[i]-arr[i-1]);

	int mx = max(abs(arr[1]-arr[0]), abs(arr[t-1]-arr[t-2]));
	for (int i = 1; i < t-1; i++){
		mx = max(mx, abs(arr[i]-arr[i-1])+abs(arr[i+1]-arr[i])-abs(arr[i+1]-arr[i-1]));
	}

	cout << ans -mx << endl;
}


int main()
{
   int n;
   cin >> n;
   while (n--){
   	compute();
   }


    return 0;
}

/*----------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 200000;
int a[MAX_N + 5];

void solve()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	ll ans = 0;
	for (int i = 2; i <= n; i++)
		ans += abs(a[i] - a[i - 1]);

	int mx = max(abs(a[1] - a[2]), abs(a[n] - a[n - 1]));
	for (int i = 2; i < n; i++)
		mx = max(mx, abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]));

	cout << ans - mx << '\n';
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
