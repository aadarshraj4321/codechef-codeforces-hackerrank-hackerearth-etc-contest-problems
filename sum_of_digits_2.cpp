#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n, total = 0;
	cin >> n;
	
	while(n > 0){
		int rem;
		rem = n % 10;
		total += rem;
		n /= 10;
	}
	
	cout << total << endl;
	
	
	
	return 0;
}