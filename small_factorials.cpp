#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	long long t;
	cin >> t;
	while(t--){
		
		long long n, total = 1;
		cin >> n;
		
		for(long long i = 1; i <= n; i++){
			total *= i;
		}
		cout << total << endl;
	}
	
	
	return 0;
}