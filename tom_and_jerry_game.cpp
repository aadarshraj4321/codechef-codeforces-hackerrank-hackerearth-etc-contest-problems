#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int testCase;
	cin>>testCase;
	while(testCase--){
		long long int tom;
		cin>>tom;
		while(tom % 2 != 1){
			tom = tom / 2;
		}
		cout<<(tom - 1)/2<<endl;
	}
	
	
	
	return 0;
}
