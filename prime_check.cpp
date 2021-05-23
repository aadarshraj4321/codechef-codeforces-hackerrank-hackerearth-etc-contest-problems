#include<bits/stdc++.h>
using namespace std;


bool primeChecker(int n){
	
	int i = 0;
	
	for(i = 2; i < n; i++){
		if(n % i == 0){
			cout <<"Not Prime Number" << endl;
			break;
		}
	}
		
	if(i == n){
		cout <<"Prime Number" << endl;
	}
}


int main(){
	
	int n;
	cin >> n;
	
	primeChecker(n);
	
	
	
	
	return 0;
}