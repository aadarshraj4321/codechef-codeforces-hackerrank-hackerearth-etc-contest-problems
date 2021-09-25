#include<bits/stdc++.h>


int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int a1, a2, a3, a4, a5, a6, a7;
		std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
		int sunnyC = 0;
		int rainyC = 0;

		if(a1 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a2 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a3 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a4 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a5 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a6 == 0)
			rainyC++;
		else
			sunnyC++;

		if(a7 == 0)
			rainyC++;
		else
			sunnyC++;

		if(sunnyC > rainyC)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}

}