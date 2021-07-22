#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
using namespace std;


int paper[100][100];
int main() {
    
    int N; // 색종이 수
    cin >> N;

    for (int i = 0; i < N; i++) {
        
        int x, y;
        cin >> x >> y;

        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                paper[j][k]++;
            }
        }

    }

    int sum = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] > 0) sum++;
        }
    }

    cout << sum;

}
