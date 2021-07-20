#include <iostream>
#include <algorithm>
using namespace std;

bool tryRoom(int A, int B, int C, int N) {

	int tmpA, tmpB, tmpC;

	for (int i = 0; i <= 113; i++) {

		tmpA = i * A;

		for (int j = 0; j <= 113; j++) {

			tmpB = j * B;

			for (int k = 0; k <= 113; k++) {

				tmpC = k * C;

				if (tmpA + tmpB + tmpC == N) return 1;

			}
		}
	}

	return 0;

}


int main() {
	
	int A, B, C, N;
	cin >> A >> B >> C >> N;

	cout << tryRoom(A, B, C, N);

}
