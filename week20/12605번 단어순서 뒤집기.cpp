#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    int testcase;
    int caseNum = 1;

    cin >> testcase;
    cin.ignore(); // testcase 입력 버퍼 무시

    while (testcase--) {
        string s;

        getline(cin, s); // 줄바꿈 직전까지 입력 받음
        reverse(s.begin(), s.end());

        s += " "; // 마지막 단어를 변환하기 위한 공백 추가

        int tmp = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + tmp, s.begin() + i); // 한 단어씩 끊어서 reverse
                tmp = i + 1; // reverse 시작 위치 변경
            }
        }

        cout << "Case #" << caseNum << ": " << s << "\n";
        caseNum++;

    }

}
