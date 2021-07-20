#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    
    string bowl;
    cin >> bowl;

    int check = false;
    int sum = 0;

    for (int i = 0; i < bowl.length(); i++) {
        if (i == 0) sum += 10;
        if (i > 0) {

            if (bowl[i - 1] == '(' && bowl[i] == ')') sum += 10;
            else if (bowl[i - 1] == ')' && bowl[i] == '(') sum += 10;
            else sum += 5;

        }
    }

    cout << sum;

}
