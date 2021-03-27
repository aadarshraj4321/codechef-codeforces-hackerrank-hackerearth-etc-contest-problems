#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
	
	
	int testCase, lucky = 0, unlucky = 0;
	cin>>testCase;
	int wepons[testCase];

	for(int i = 0; i < testCase; i++){
		cin>>wepons[i];
	}
	
	for(int i = 0; i < testCase; i++){
		if(wepons[i] % 2 == 0)
			lucky++;
		else
			unlucky++;
	}
	
	if(lucky > unlucky)
		cout<<"READY FOR BATTLE";
	else
		cout<<"NOT READY";
	
	
	return 0;
}
