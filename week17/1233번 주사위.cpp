#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    
    int a, b, c;
    cin >> a >> b >> c; // 2 ~ 20, 2 ~ 20, 2 ~ 40
    // 3 2 3

    int cnt[82] = { 0, };

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                cnt[i + j + k]++;
            }
        }
    }

    int max = 1;
    int result = 0;

    for (int i = 1; i <= 80; i++) {
        if (cnt[i] > max) {
            max = cnt[i]; result = i;
        }
    }

    cout << result;

}
 
