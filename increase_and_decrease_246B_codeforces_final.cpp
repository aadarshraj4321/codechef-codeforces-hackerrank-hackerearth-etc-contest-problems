#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n, total = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		total += x;
	}
	
	if(total % n == 0) cout << n;
	else cout << n - 1 << endl;
	
	return 0;
}