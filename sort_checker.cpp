#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		
		int *arr = new int[n];
		int *brr = new int[n];
		
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		
		for(int i = 0; i < n; i++){
			cin >> brr[i];
		}
		
		sort(arr, arr + n);
		
		for(int i = 0; i < n; i++){
			if(arr[i] == brr[i])
				count++;
		}
		
		(count == n) ? cout << "yes": cout << "no" << endl;
			
	}
	return 0;
}