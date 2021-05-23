#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	cin >> n;
	
	int five = 0, zeros = 0;
	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		
		if(num == 0)
			zeros++;
		else
			five++;
	}
	

	if(five > 9){
		int div = five / 9;
	
		int final = div * 9;
		
		for(int i = 0; i < final; i++){
			cout << 5 << " ";
		}
	
		for(int i = 0; i < zeros; i++){
			cout << 0 << " ";
		}
	}
	else{
		cout << 0 << endl;
	}
	
	cout << endl;
	

	
	
	
	
	return 0;
}