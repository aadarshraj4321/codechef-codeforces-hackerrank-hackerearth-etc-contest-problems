#include<bits/stdc++.h>
using namespace std;



void getSolve(vector<int>&v);

int main(){
	
	int n;
	cin >> n;
	vector<int>v;
	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	
	getSolve(v);
	
	
	return 0;
}


void getSolve(vector<int>&v){
	
	int left = 0;
	int right = v.size() - 1;
	
	while(left < right){
		while(v[left] == 0 && left < right){
			left++;
		} 
		
		while(v[right] == 1 && left < right){
			right--;
		}
		
		if(left < right){
			swap(v[left], v[right]);
			left++;
			right--;
		}
	}
	for(auto ele: v){
		cout << ele << " ";
	}
	
}






