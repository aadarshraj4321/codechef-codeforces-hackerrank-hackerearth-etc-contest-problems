#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int n, five = 0, zeros = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		
		if(x == 0)
			zeros++;
		else
			five++;
	}
	
	if(zeros == 0)
		cout << -1 << endl;
	else if(five < 9)
		cout << 0 << endl;	
	else if(five >= 9){
		int div = five / 9;
		int final = div * 9;
		
		for(int i = 0; i < final; i++){
			cout << 5 << "";
		}
		
		for(int i = 0; i < zeros; i++){
			cout << 0 << "";
		}
	}
	
	
	
	return 0;
}