// 언어 : C++ , (성공/실패) : 1/3 , 메모리 : 2028 KB , 시간 : 0ms
#include <iostream>
using namespace std;

long long memo[1001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    memo[1] = 1;
    memo[2] = 2;

    for (int i = 3; i <= n; i++) {
        memo[i] = (memo[i - 1] + memo[i - 2]) % 10007;
    }

    cout << memo[n];

    return 0;
}
