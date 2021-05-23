#include<bits/stdc++.h>
using namespace std;


void primeChecker(int n){
	
	int i = 0;
	for(i = 2; i < n; i++){
		if(n % i == 0){
			break;
		}
	}	
	if(i == n){
		cout << i << endl;
	}
}


int main(){
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		primeChecker(i);
	}

	return 0;
}