#include<iostream>
#include<string>
using namespace std;



int main(){
	
	int testCase;
	cin >> testCase;
	
	while(testCase--){
		int n;
		cin >> n;
		
		string str;
		cin >> str;
		
		int f = 0;
		
		int possibleA = n;
		int possibleB = n;
		
		int penaltyA = 0;
		int penaltyB = 0;
		
		for(int i = 0; i < 2 * n; i++){
			
			if(i % 2 == 0){
				penaltyA = penaltyA+ (str[i] - '0');
				possibleA--;
			}
			else{
				penaltyB = penaltyB+ (str[i] - '0');
				possibleB--;
			}
			if(penaltyA > penaltyB + possibleB){
				cout << i + 1 << endl;
				break;
			}
			else if(penaltyB > penaltyA + possibleA){
				cout << i + 1 << endl;
				break;
			}
			else if(penaltyA == penaltyB && i == 2 * n - 1){
				cout << i + 1 << endl;
				break;
			}
		}
		
		
	}
	
	
	
	return 0;
}
