// ��� : C++ , (����/����) : 1/0 , �޸� : 2020 KB , �ð� : 0ms

#include<iostream>

using namespace std;

long long memo[21];

int main() {
	int N; cin >> N;
	memo[0] = 0; memo[1] = 1;

	// ���Ҿ� ���
	for (int i = 2; i <= N; i++) {
		memo[i] = memo[i - 1] + memo[i - 2]; // ��ȭ��
	}
	cout << memo[N] << '\n';
}