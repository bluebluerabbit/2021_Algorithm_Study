#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    int N, M, sum = 0, maxNum = -1;
    cin >> N >> M;

    int number[100] = { 0, };

    for (int i = 0; i < N; i++) cin >> number[i];

    // 카드 3장의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 함
    // 위 조건을 만족하는 카드 3장의 합을 출력

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                sum = number[i] + number[j] + number[k];
                if (sum <= M && sum > maxNum) maxNum = sum;
            }
        }
    }

    cout << maxNum;

}
