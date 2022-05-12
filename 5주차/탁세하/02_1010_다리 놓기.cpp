// ��� : C++ , (����/����) : 1/1 , �޸� : 2020 KB , �ð� : 0ms

#include<iostream>

using namespace std;

long memo[30]; // nCn, n+1Cn, n+2Cn, ... ,mCn�� ����

// �ٸ��� ���� �� �ִ� ����� ���� mCn(���� �ٸ� M�� �� N���� �����ϴ� ����� ��)�̹Ƿ�, mCn = m/(m-n) * m-1Cn (m != n)�� ��ȭ������ ����Ѵ�.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	int N, M;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		memo[0] = 1; // nCn = 1
		if (N == M) { cout << memo[0] << '\n'; } // nCn�� ���
		else {
			for (int i = 1; i <= M - N; i++) {
				memo[i] = ((N + i) * memo[i - 1]) / i; // ��ȭ��. double�� ����ϸ� X
			}
			cout << memo[M - N] << '\n';
		}
	}
}