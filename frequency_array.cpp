#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		//vector<int>v;
		set<int>s;
		
//		for(int i = 0; i < n; i++){
//			int num;
//			cin >> num;
//			v.push_back(num);
//		}

//		
//		for(auto ele: v){
//			s.insert(ele);
//		}

		for(int i = 0; i < n; i++){
			int num;
			cin >>  num;
			s.insert(num);
		}
		
		//cout << s.size() << endl;
		if(s.size() != n){
			cout << "ne krasivo" << endl;
		}
		else{
			cout << "prekrasnyy" << endl;
		}
	}
	
	
	return 0;
}