#include <iostream>
#include <algorithm>
using namespace std;


int main(){

	int R, B, L = 0, W = 0;
	cin >> R >> B;

	for (int i = 1;i<=5000; i++) {

		for (int j = 1;j<=5000; j++) {

			if (i * j == R + B) {

				if ((2 * i) + (2 * (j - 2)) == R) { // R 수 구하기
					
					if (i > j) L = i, W = j;
					else L = j, W = i;

					cout << L << " " << W;
					return 0;

				}

			}

		}

	} 
	
}
