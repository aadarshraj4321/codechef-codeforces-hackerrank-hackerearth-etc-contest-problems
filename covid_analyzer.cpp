#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		long int num, ith, a, b, c;
		cin >> num;
		a = 1;
		b = 1;
		if(num == 1 || num == 2)
			cout << a << endl;
		else{
			for(ith = 1; ith < num; ith++){
				c = a + b;
				a = b;
				b = c;
			}
			cout << c <<endl;
		}
	}
	
	return 0;
}