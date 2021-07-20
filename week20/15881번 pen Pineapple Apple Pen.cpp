#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    int n; // 물건의 개수
    string s; // 물체 목록
    /*
    A : 사과
    P : 파인애플
    p : 펜

    pPAp
    */

    cin >> n >> s;

    int result = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'p') {
            s[i] = '0';
            if (s[i + 1] == 'P') {
                s[i + 1] = '0';
                if (s[i + 2] == 'A') {
                    s[i + 2] = '0';
                    if (s[i + 3] == 'p') {
                        s[i + 3] = '0';
                        result++;
                    }
                }
            }
        }
        else continue;
    }

    cout << result;

}
