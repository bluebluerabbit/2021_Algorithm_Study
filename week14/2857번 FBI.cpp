#include <iostream>
#include <algorithm>
using namespace std;


int main(){

	string s[6];

	int check = 0;

	for (int i = 1; i < 6; i++) {
		cin >> s[i];
	}

	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < s[i].length(); j++) {

			if (j + 2 < 10) {
				if (s[i][j] == 'F' && s[i][j + 1] == 'B' && s[i][j + 2] == 'I') {
					check++;
					cout << i << " ";
					break;
				}
			}
		}

	}

	if (check == 0) cout << "HE GOT AWAY!";

}
