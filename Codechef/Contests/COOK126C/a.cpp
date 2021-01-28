// Easy problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while(n--){
		string str;
		cin >> str;
		int k(str.size()), chk(0);
		
		for(int i = 1; i < k-1; i++){
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'){
				chk++;
				break;
			}
		}

		for(int i = 1; i < k-1; i++){
			if(str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?'){
				chk++;
				break;
			}
		}

		for(int i = 1; i < k-1; i++){
			if(isupper(str[i])){
				chk++;
				break;
			}
		}

		for (int i = 0; i < k; i++){
			if(islower(str[i])){
				chk++;
				break;
			}
		}

		if (k >= 10 && chk == 4) cout << "YES\n";
		else cout << "NO\n";


	}	

}