#include<bits/stdc++.h>
using namespace std;


int main(){
	
	long long n, divi, sum = 0;
	cin >> n;
	
	for(long long i = 1; i < n; i++){
		divi = n % i;
		if(divi == 0)
			sum += i;
	}
	
	if(sum == n){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}