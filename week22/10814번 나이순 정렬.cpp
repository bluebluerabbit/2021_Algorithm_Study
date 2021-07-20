#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
using namespace std;


pair<int, string> humanArr[100001];
/*
pair <[data type 1], [data type 2]> 변수명;
*/

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int N;

    int age;
    string name;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        humanArr[i] = make_pair(age, name);
        // make_pair를 이용하여 두 변수를 pair 형태로 묶어준다

        //cout << "현재 : " << humanArr[i].first << " " << humanArr[i].second << "\n";
    }

    // 가입 순서에 따라 정렬해야 하므로 Stable sort(안정 정렬)를 이용한다
    stable_sort(humanArr, humanArr + N, cmp);
    // 나이가 같다면? -> cmp 함수를 이용하여 가입 순서에 따라 정렬..?

    for (int i = 0; i < N; i++) {
        cout << humanArr[i].first << " " << humanArr[i].second << "\n";
    }



}
