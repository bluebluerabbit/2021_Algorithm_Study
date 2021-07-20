#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int x, y;
	
	x = (c * e - b * f) / (a * e - b * d);
	y = (c * d - f * a) / (b * d - e * a);

	cout << x << " " << y;

}
