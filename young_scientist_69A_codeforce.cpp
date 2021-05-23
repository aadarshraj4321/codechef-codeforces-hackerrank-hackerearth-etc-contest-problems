#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int n;
	int addX = 0, addY = 0, addZ = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x, y, z;
		
		cin >> x >> y >> z;

		addX += x;
		addY += y;
		addZ += z;
	
	}
	
	if(addX == 0 && addY == 0 && addZ == 0)
		cout << "YES" << endl;
	else{
		cout << "NO" << endl;
	}	
	
	
	return 0;
}