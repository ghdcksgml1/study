// ��� : C++ , (����/����) : 1/4 , �޸� : 2028 KB , �ð� : 0ms

#include<iostream>

using namespace std;

long long memo[1001];

// ��ȭ�� s[n] = s[n-1] + s[n-2]�� ����Ѵ�.
int main() {
	int n; cin >> n;
	memo[1] = 1; memo[2] = 2;
	for (int i = 3; i <= n; i++) {
		memo[i] = (memo[i - 1] + memo[i - 2]) % 10'007; // ��ȭ��
	}
	cout << memo[n];
}