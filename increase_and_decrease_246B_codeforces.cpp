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
	
	
	for(int i = 0; i < n - 1; i++){
		if(v[i] != v[i + 1]){
			if(v[i] < v[i + 1]){
				v[i]++;
				v[i + 1]--;
			}
			else if(v[i] > v[i + 1]){
				v[i]--;
				v[i + 1]++;
			}
		}
	}
	int maxi = 0;
	for(int i = 0; i < n - 1; i++){
		int cnt = 1;
		for(int j = 1; j < n; j++){
			if(v[i] == v[j])
				cnt++;
				
			if(cnt > maxi)
				maxi = cnt;
		}
	}
	
	
	cout << maxi << endl;
	
	return 0;
}