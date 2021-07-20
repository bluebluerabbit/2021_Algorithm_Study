#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
    
    int number[5];
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> number[i];
        number[i] = number[i] * number[i];
        sum += number[i];
    }

    char tmp[5];
    sprintf(tmp, "%d", sum);

    cout << tmp[strlen(tmp) - 1];

}
