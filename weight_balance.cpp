#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		int w1, w2, x1, x2, m;
		int res1, res2;
		cin>>w1>>w2>>x1>>x2>>m;
		
		res1 = x1 * m;
		res2 = x2 * m;
		
		if(w2 - w1 == res1 || w2 - w1 == res2){
			cout<<1<<endl;
		}else if(w2 - w1 >= res1 && w2 - w1 <= res2){
			cout<<1<<endl;
		}
		
		else{
			cout<<0<<endl;
		}
		
	}
	

	
	return 0;
}
