#include<iostream>
#include<bits/stdc++.h>
using namespace  std;




int main(){
	
	
	
	int testCase;
	cin >> testCase;
	while(testCase--){
		
		int n, x;
		cin >> n >> x;
		
		int maxScore = -10000;
		
		while(n--){
			
			int space, rating;
			cin >> space >> rating;
			if(space <= x){
				if(maxScore < rating){
					maxScore = rating;
				}
			}
		}
		cout << maxScore << endl;
	}
	
	
	
	return 0;
}
