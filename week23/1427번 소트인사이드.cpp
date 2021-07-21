#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
using namespace std;


int main() {
    
    char arr[12];
    cin >> arr;

    sort(arr, arr + strlen(arr));

    for (int i = strlen(arr) - 1; i >= 0; i--) {
        cout << arr[i];
    }

}
