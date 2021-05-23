#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int n;
	cin >> n;
	
	int no_of_stars = 1, no_of_spaces = 2 * n - 2;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < no_of_spaces; j++){
			cout << " ";
		}
		
		for(int j = 0; j < no_of_stars; j++){
			cout << "* ";
		}
		cout << endl;
		
		no_of_spaces -= 2;
		no_of_stars += 2;
	}
	
	
	
	for(int i = 0; i < 2 * n - 1; i++){
		cout << "* ";
	}
	cout << endl;
	
	no_of_stars = 2 * n - 3, no_of_spaces = 2;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < no_of_spaces; j++){
			cout << " ";
		}
		
		for(int j = 0; j < no_of_stars; j++){
			cout << "* ";
		}
		cout << endl;
		
		no_of_spaces += 2;
		no_of_stars -= 2;
	}
	
	
	
	
	

	
	return 0;
}