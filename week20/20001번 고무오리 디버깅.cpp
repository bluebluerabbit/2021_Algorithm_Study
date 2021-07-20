#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    bool start = false;
    int que = 0;

    string startS;
    for (int i = 0; i < 3; i++) {
        cin >> startS;
    } // 고무오리 디버깅 시작 (어절 3개)

    cin.ignore(); // 입력 버퍼 무시

    while (1) {
        string s;
        getline(cin, s); // 줄바꿈 기준으로 입력받기
        
        if (s == "문제") que++;
        else if (s == "고무오리" && que > 0) que--;
        else if (s == "고무오리" && que == 0) que += 2;
        else break;
    }

    if (que == 0) cout << "고무오리야 사랑해";
    else cout << "힝구";

}
