// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms
#include <iostream>
using namespace std;

long long memo[21];

int main(void) {
    memo[0] = 0; memo[1] = 1;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    cout << memo[n] << '\n';

    return 0;
}

