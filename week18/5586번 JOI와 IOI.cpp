#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string find;
    cin >> find;

    int joi = 0, ioi = 0;
    
    bool jTmp = false, iTmp = false;

    for (int i = 0; i < find.length(); i++) {

        if (find[i] == 'J') {
            if (find[i + 1] == 'O' && find[i + 2] == 'I') joi++;
        }

        if (find[i] == 'I') {
            if (find[i + 1] == 'O' && find[i + 2] == 'I') ioi++;
        }

    }

    cout << joi << "\n" << ioi;

};
