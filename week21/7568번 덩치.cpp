#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    int N;
    cin >> N;

    int weight[50];
    int height[50];
    int score[50];
    
    fill_n(score, 50, 1);

    for (int i = 0; i < N; i++) {
        cin >> weight[i] >> height[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (weight[j] > weight[i] && height[j] > height[i]) {
                score[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << score[i] << " ";
    }

}
