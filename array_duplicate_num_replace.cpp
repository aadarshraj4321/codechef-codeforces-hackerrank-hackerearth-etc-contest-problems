#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	cin >> n;
	
	vector<int>v;
	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < n; i++){
		if(v[i] == v[i + 1])
			cout << v[i] << " " << v[i] + 1 << endl;
	}
	

	
	return 0;
}