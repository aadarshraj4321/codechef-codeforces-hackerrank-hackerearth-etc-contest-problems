#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int a, b;
		cin >> a >> b;
		
		int final_a = (a * 100) / 500;
		int final_b = (b * 100) / 500;
		
		if(final_a > final_b)	cout << "A" << endl;
		else cout << "B" << endl;
	}
	
	
	
	return 0;
}