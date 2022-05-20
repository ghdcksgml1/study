// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
using namespace std;

int dp[1000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T, n;
	cin >> T;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;


	for (int t = 0; t < T; t++) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}
		cout << dp[n] << "\n";
	}

	
	return 0;
}
