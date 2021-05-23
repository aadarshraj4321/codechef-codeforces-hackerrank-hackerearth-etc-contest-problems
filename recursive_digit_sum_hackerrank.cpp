#include<bits/stdc++.h>
using namespace std;


int superDigit(string s, int k);

int main(){
	
	string s;
	int k;
	
	cin >> s >> k;
	
	int ans = superDigit(s, k);
	cout << ans << endl;
	
	
	return 0;
}


int superDigit(string s, int k){
	
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum += (s[i] - '0');
	}
	
	sum *= k;
	if(sum <= 9)
		return sum;
	
	return superDigit(to_string(sum), 1);	
}



