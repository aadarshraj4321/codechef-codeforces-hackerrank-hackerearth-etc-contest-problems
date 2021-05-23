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
	
	int tmp = v[0];
	
	for(int i = 0; i < n; i++){
		v[i] = v[i + 1];
	}
	
	v[n - 1] = tmp;
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	
	
	
	
	
	return 0;
}