// ��� : C++ , (����/����) : 1/4 , �޸� : 2412 KB , �ð� : 0ms
// ��Ÿ�ӿ���(OutOfBounds) : �迭 ũ�� Ȯ���غ���!

#include<iostream>
#include <algorithm>

using namespace std;

int coin[110]; // �� ������ ��ġ
int dp[100010]; // dp[k] : k���� �� �ּ� ������ ����

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i++) { // ���� ��ġ �迭�� �Է�
		cin >> coin[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= k; i++) { // dp 2e9�� �ʱ�ȭ
		dp[i] = 2e9;
	}

	for (int i = 1; i <= n; i++) { // �־��� ������ ��ġ�� k���� ��, dp[k] = 1
		dp[coin[i]] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1); // ��ȭ��
		}
	}
	if (dp[k] == 2e9) cout << -1;
	else cout << dp[k];

	return 0;
}