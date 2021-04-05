#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;



int main(){
	
	float record = 9.58;
	
	int testCase;
	cin >> testCase;
	
	while(testCase--){
		double k1, k2, k3, v;
		
		cin >> k1 >> k2 >> k3 >> v;
		
		double totalTime = k1 * k2 * k3 * v;
		
		double timeTaken = 100 / totalTime;
		double finalTime = round(timeTaken * 100) / 100;
		
		
		

		
		if(finalTime >= record){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
		
		
	}
	
	
	
	
	return 0;
}
