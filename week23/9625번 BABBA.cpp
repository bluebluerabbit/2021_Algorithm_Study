#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
using namespace std;

int dp[100];

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (dp[n] != 0) return dp[n];

    dp[n] = fibo(n - 2) + fibo(n - 1);

    return dp[n];
}

int main() {
    
    int K;
    cin >> K;

    for (int i = 0; i < 50; i++) {
        dp[i] = fibo(i);
    }

    cout << dp[K-1] << " " << dp[K];
		// 피보나치 dp 배열에서 B의 개수는 A의 개수보다 한 칸 앞선다

}
