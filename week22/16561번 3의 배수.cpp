#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

    int number, result = 0;
    cin >> number;

    /*
    3개의 3의 배수로 분리 -> 9 이상부터 가능
    number = 9 = 3 + 3 + 3 -> result == 1
    number = 12 = 3 + 3 + 6 = 3 + 6 + 3 = 6 + 3 + 3 -> result == 3
    number = 15 = 3 + 3 + 9 (3개) = 3 + 6 + 6 (3개) -> result == 6
    number = 18 = 3 + 3 + 12 (3개) = 3 + 6 + 9 (3개) ...

    1, 3, 6, 10 ... 
      2, 3, 4 ... 씩 증가
    */

    number = number / 3 - 2;
    
    // 1부터 number을 3으로 나누고 2를 뺀 값까지의 합
    for (int i = 1; i <= number; i++) result += i;
    cout << result;
    
}
