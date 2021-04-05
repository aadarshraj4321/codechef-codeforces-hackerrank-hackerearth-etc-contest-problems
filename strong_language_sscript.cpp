#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;



int main(){
	
	int testCase;
	cin >> testCase;
	
	while(testCase--){
		int n, k, count = 0, maxi = 0;
		
		cin >> n >> k;
		
		string str;
		
		cin >> str;
	
		
		for(int i = 0; i < n; i++){
			if(str[i] == '*'){
				count++;
				if(count >= maxi){
					maxi = count;
				}
			}
			else{
				count  = 0;
			}
		}
		if(maxi >= k){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}	
	

	}

	return 0;
	
}
