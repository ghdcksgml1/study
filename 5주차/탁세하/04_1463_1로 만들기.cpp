// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 5928 KB , 시간 : 8ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int memo[1000010]; // 배열 크기 : 10^6 + 10(여유분)

// 1부터 따져서 N까지 계산
int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;
    memset(memo, -1, sizeof(memo)); // memo 요소 -1로 초기화

    memo[1] = 0; memo[2] = 1; memo[3] = 1;
    for (int i = 1; i <= N; i++) {
        if (memo[i] == -1) continue;
        memo[i + 1] = memo[i + 1] == -1 ? memo[i] + 1 : min(memo[i + 1], memo[i] + 1);
        if (i * 2 <= N) memo[i * 2] = memo[i * 2] == -1 ? memo[i] + 1 : min(memo[i * 2], memo[i] + 1);
        if (i * 3 <= N) memo[i * 3] = memo[i * 3] == -1 ? memo[i] + 1 : min(memo[i * 3], memo[i] + 1);
    }

    cout << memo[N];

    return 0;
}