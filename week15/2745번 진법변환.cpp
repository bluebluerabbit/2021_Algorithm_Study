#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	string N;
	int B;
	cin >> N >> B;

	int pow = 1;
	long long result = 0;

	for (int i = N.length() - 1; i >= 0; i--) {

		int tmpNum;
		if (N[i] >= '0' && N[i] <= '9') tmpNum = N[i] - '0';
		else tmpNum = N[i] - 'A' + 10;

		result += tmpNum * pow;
		pow *= B;

	}

	cout << result;

}
 
