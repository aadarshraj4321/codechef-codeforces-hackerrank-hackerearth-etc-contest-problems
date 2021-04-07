#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mini(ll left, ll right){
	
	if(left < right){
		return left;
	}
	return right;
}



int main(){
	
	ll testCase;
	cin >> testCase;
	while(testCase--){
		ll n, m, k;
		cin >> n >> m >> k;
		double matrix[n + 1][m + 1];
		for(ll i = 0; i <= n; i++){
			for(ll j = 0; j <= m; j++){
				if(i == 0 or j == 0){
					matrix[i][j] = 0;
				}
				else{
					cin >> matrix[i][j];
				}
			}
		}
		for(ll i = 0; i <= n; i++){
			double s = 0;
			for(ll j = 0; j <= m; j++){
				matrix[i][j] += s;
				s = matrix[i][j];
			}
		}
		for(ll j = 0; j <= m; j++){
			double s = 0;
			for(ll i = 0; i <= n; i++){
				matrix[i][j] += s;
				s = matrix[i][j];
			}
		}
		ll smaller = mini(n, m);
		ll totalAns = 0;
		for(ll length = 1; length <= smaller; length++){
			for(ll i = length; i <= n; i++){
				for(ll j = length; j <= m; j++){
					if((matrix[i][j] + matrix[i - length][j - length] - matrix[i][j - length] - matrix[i - length][j]) / (length * length) >= k)
					{
						totalAns++;
					}
				}
			}
		}
		cout << totalAns << endl;
	}
	
	
	
	
	return 0;
}
