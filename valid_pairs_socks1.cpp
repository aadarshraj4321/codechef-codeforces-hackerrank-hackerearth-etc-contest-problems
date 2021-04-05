#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a == b or b == a){
		cout << "YES" << endl;
	}
	else if(a == c or c == a){
		cout << "YES" << endl;
	}
	else if(b == c or c == b){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	
	return 0;
}
