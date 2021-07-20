#include <string.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;


 
int main(){

	string a, b;
	cin >> a >> b;

	string realA, realB;

	for (int i = a.length() - 1; i >= 0; i--) {
		realA += a[i];
	}

	for (int i = b.length() - 1; i >= 0; i--) {
		realB += b[i];
	}

	int x, y;

	x = stoi(realA);
	y = stoi(realB);

	char result[1000];
	string realRE;

	sprintf(result, "%d", x + y);

	for (int i = strlen(result) - 1; i >= 0; i--) {
		realRE += result[i];
	}

	cout << stoi(realRE);
	
}
