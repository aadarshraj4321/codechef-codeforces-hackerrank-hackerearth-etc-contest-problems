#include<iostream>
using namespace std;
typedef long long ll;


int main(){
	
	
	int testCase;
	cin >> testCase;
	
	while(testCase--){
		
		ll num;
		ll sum = 0;
		int remainder, result;
		cin >> num;
		
		sum = (num / 4) * 44;
		remainder = (num % 4);
		
		if(num >= 4){
			if(remainder == 0){
				sum += 16;
			}
			
			if(remainder == 1){
				sum += 32;
			}
			
			if(remainder == 2){
				sum += 44;
			}
			
			if(remainder == 3){
				sum += 55;
			}
			
			cout << sum << endl;
		}
		
		else{
			if(remainder == 1){
				result = 20;
			}
			
			if(remainder == 2){
				result = 36;
			}
			
			if(remainder == 3){
				result = 51;
			}
			
			cout << result << endl;
		}
		
		
	}
	
	
	
	
	return 0;
}
