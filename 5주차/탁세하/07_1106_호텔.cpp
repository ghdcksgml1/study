// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

pair<int, int> arr[20]; // arr.first : 각 도시 홍보 비용. arr.second : 비용 당 확보 고객

int memo[1200]; // 최소 투자금

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int C, N; cin >> C >> N;
    memset(memo, -1, sizeof(memo)); // memo 요소 -1로 초기화

    for (int i = 0; i < N; i++) {
        int a, b; cin >> a >> b;
        if (memo[b] == -1) {
            memo[b] = a;
        }
        else {
            memo[b] = min(memo[b], a);
        }
        arr[i] = { a,b };
    }

    memo[0] = 0;
    for (int i = 0; i <= C; i++) {
        if (memo[i] == -1) continue;
        for (int j = 0; j < N; j++) {
            memo[i + arr[j].second] = (memo[i + arr[j].second] == -1) ? memo[i] + arr[j].first : min(memo[i + arr[j].second], memo[i] + arr[j].first);
        }
    }

    int mn = 10000000000;
    for (int i = C; i <= C + 100; i++) {
        if (memo[i] != -1) mn = min(mn, memo[i]);
    }

    cout << mn << '\n';

    return 0;
}