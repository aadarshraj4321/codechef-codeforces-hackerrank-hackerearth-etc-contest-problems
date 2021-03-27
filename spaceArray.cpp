#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int testCase;
	cin>>testCase;
	while(testCase--){
		int num;
		cin>>num;
		int all[num];
		for(int i = 0; i < num; i++){
			cin>>all[i];
		}
		
		sort(all, all + num);
		int value = 0;
		int standFlag = 0;
		for(int i = 0; i < num; i++){
			if((i + 1 - all[i]) < 0){
				standFlag = 1;
				break;
			}
			value = value  + (i + 1 - all[i]);
		}
		if(standFlag == 1){
			cout<<"Second"<<endl;
		}
		else{
			if(value % 2 == 1){
				cout<<"First"<<endl;
			}
			else{ 
				cout<<"Second"<<endl;
			}
		}
	}
	
	
	return 0;
}
