// ��� : C++ , (����/����) : 1/0 , �޸� : 2024 KB , �ð� : 0ms

#include<iostream>

using namespace std;

int stair[301]; // ��� ����
int dp[301][2]; // dp[i][0] : ���� ����� ���� �ʾ��� ��, i��° ��ܱ����� �� ���� �ִ�. dp[i][1] : ���� ����� ����� ��, i��° ��ܱ����� �� ���� �ִ�.
int dpResult[301]; // n��° ��ܱ����� �� ���� �ִ�

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) { // ��� ���� �迭�� �Է�
		int tmp; cin >> tmp;
		stair[i] = tmp;
	}
	dp[1][0] = stair[1]; dp[1][1] = 0; dp[2][0] = max(stair[1], stair[2]); dp[2][1] = stair[1] + stair[2];
	for (int i = 3; i <= n; i++) {
		dp[i][0] = max(dp[i - 2][0] + stair[i], dp[i - 2][1] + stair[i]); // ���� ����� ���� �ʾ��� ��, i��° ��ܱ����� �� ���� �ִ�
		dp[i][1] = dp[i - 1][0] + stair[i]; // ���� ����� ����� ��, i��° ��ܱ����� �� ���� �ִ�
	}
	for (int i = 1; i <= n; i++) {
		dpResult[i] = max(dp[i][0], dp[i][1]);
	}
	cout << dpResult[n];
}