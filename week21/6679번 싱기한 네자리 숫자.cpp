#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    for (int i = 2992; i <= 9999; i++) {

        int sum10 = 0, sum12 = 0, sum16 = 0;
        int tmpNum = i;

        // 10진수

        while (tmpNum>=10) {
            sum10 += (tmpNum % 10);
            tmpNum /= 10;
        }

        sum10 += tmpNum % 10;
        tmpNum = i;

        // 12진수

        while (tmpNum>=12) {
            sum12 += (tmpNum % 12);
            tmpNum /= 12;
        }

        sum12 += tmpNum % 12;
        tmpNum = i;
        
        // 16진수

        while (tmpNum>=16) {
            sum16 += (tmpNum % 16);
            tmpNum /= 16;
        }

        sum16 += tmpNum % 16;

        if ((sum10 == sum12) && (sum12 == sum16)) cout << i << "\n";

    }

}
