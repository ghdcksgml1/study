// 언어 : C++ , (성공/실패) : 1/4 , 메모리 : 2412 KB , 시간 : 0ms
// 런타임에러(OutOfBounds) : 배열 크기 확인해보기!

#include<iostream>
#include <algorithm>

using namespace std;

int coin[110]; // 각 동전의 가치
int dp[100010]; // dp[k] : k원일 때 최소 동전의 개수

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i++) { // 동전 가치 배열에 입력
		cin >> coin[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= k; i++) { // dp 2e9로 초기화
		dp[i] = 2e9;
	}

	for (int i = 1; i <= n; i++) { // 주어진 동전의 가치가 k원일 때, dp[k] = 1
		dp[coin[i]] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1); // 점화식
		}
	}
	if (dp[k] == 2e9) cout << -1;
	else cout << dp[k];

	return 0;
}