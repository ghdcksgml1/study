// ��� : C++ , (����/����) : 1/1 , �޸� : 2060 KB , �ð� : 0ms

#include<iostream>

using namespace std;

int A[10001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;

	for (int i = 0; i < N; i++) { // �迭 A�� ���� ����
		cin >> A[i];
	}

	int sum = A[0];
	int count = 0;
	int s_p = 0; int e_p = 0;
	while (e_p < N) {
		if (sum == M) count++;
		if (sum < M) {
			e_p++;
			sum += A[e_p];
		}		
		else {
			sum -= A[s_p];
			s_p++;
		}
	}
	cout << count;

	return 0;
}