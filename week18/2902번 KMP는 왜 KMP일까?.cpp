#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string name;
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        if (i == 0) cout << name[i];
        else if (name[i - 1] == '-') cout << name[i];
    }

};
