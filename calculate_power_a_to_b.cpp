#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int a, b, final = 1;
	cin >> a >> b;
	
	for(int i = 1; i <= b; i++){
		final *= a;
	}
	
	cout << final << endl;
	
	return 0;
}