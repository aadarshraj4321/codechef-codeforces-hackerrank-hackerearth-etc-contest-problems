#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int testCase;
	cin>>testCase;
	while(testCase--){
		
		int requestQ, floor;
		cin>>floor>>requestQ;
		long long dist = 0;
		int curr = 0;
		
		for(int i = 0; i < requestQ; i++){
			
			int fi, di;
			cin>>fi>>di;
			
			dist += abs(curr - fi) + abs(fi - di);
			curr = di;
		}
		cout<<dist<<endl;
	}
	
	
	return 0;
}
