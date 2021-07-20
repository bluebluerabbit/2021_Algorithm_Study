#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    int N, M; // NxM 크기의 초콜릿 -> NxM개의 조각으로 나눠질 수 있음
    cin >> N >> M;

    int result;
    // NxM -> 1x1 크기의 초콜릿으로 쪼개기 위한 최소 쪼개기 횟수

    result = N * M - 1;
    cout << result;
    
}
