#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int t;
	cin>>t;
	while(t--){
		string newS;
		cin>>newS;
		int final = 0;
		int ith = 0;
		
		while(i < newS.size()){
			if(newS[ith] == "1"){
				final++;
				while(ith < newS.size() && newS[ith] == "1"){
					ith++;
				}
				else{
					i++;
				}
			}
			cout<<res<<endl;
		}
		
	}
	
	
	return 0;
}
