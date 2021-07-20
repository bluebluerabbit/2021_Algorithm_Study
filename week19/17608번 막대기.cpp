#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    int N; // 막대기 개수
    cin >> N;

    int height[100000] = { 0, };

    for (int i = 0; i < N; i++) cin >> height[i];
        
        
    int first = height[N - 1]; // 기준 막대기
    int result = 1; // 기준 막대기는 무조건 보이므로 1개부터 시작

    for (int i = N - 2; i >= 0; i--) {
            if (height[i] > first) { // 기준 막대기보다 더 긴 막대기가 등장
                result++;
                first = height[i]; // 기준 막대기를 바꾼다
            }
    }

    cout << result;

}
