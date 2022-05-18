// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include<iostream>

using namespace std;

int stair[301]; // 계단 점수
int dp[301][2]; // dp[i][0] : 직전 계단을 밟지 않았을 때, i번째 계단까지의 총 점수 최댓값. dp[i][1] : 직전 계단을 밟았을 때, i번째 계단까지의 총 점수 최댓값.
int dpResult[301]; // n번째 계단까지의 총 점수 최댓값

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) { // 계단 점수 배열에 입력
		int tmp; cin >> tmp;
		stair[i] = tmp;
	}
	dp[1][0] = stair[1]; dp[1][1] = 0; dp[2][0] = max(stair[1], stair[2]); dp[2][1] = stair[1] + stair[2];
	for (int i = 3; i <= n; i++) {
		dp[i][0] = max(dp[i - 2][0] + stair[i], dp[i - 2][1] + stair[i]); // 직전 계단을 밟지 않았을 때, i번째 계단까지의 총 점수 최댓값
		dp[i][1] = dp[i - 1][0] + stair[i]; // 직전 계단을 밟았을 때, i번째 계단까지의 총 점수 최댓값
	}
	for (int i = 1; i <= n; i++) {
		dpResult[i] = max(dp[i][0], dp[i][1]);
	}
	cout << dpResult[n];
}