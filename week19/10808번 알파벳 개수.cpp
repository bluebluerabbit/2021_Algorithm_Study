#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    string s;
    int check[26] = { 0, };

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 97; j <= 122; j++) {
            if (s[i] == j) check[j - 97]++;
        }
    }

    for (int i = 0; i < 26; i++) cout << check[i] << " ";

};
