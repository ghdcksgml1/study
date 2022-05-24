// ��� : C++ , (����/����) : 1/2 , �޸� : 9832 KB , �ð� : 512ms

#include<iostream>

using namespace std;

int arrA[1000000];
int arrB[1000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) { // arrA�� �迭 A�� ����
		cin >> arrA[i];
	}
	for (int i = 0; i < M; i++) { // arrB�� �迭 B�� ����
		cin >> arrB[i];
	}
	int s_p = 0; int e_p = 0;
	while (true) {
		if (arrA[s_p] <= arrB[e_p]) {
			if (s_p >= N) {
				cout << arrB[e_p] << ' ';
				e_p++;
			}
			else {
				cout << arrA[s_p] << ' ';
				s_p++;
			}
		}
		else {
			if (e_p >= M) {
				cout << arrA[s_p] << ' ';
				s_p++;
			}
			else {
				cout << arrB[e_p] << ' ';
				e_p++;
			}
		}
		if (s_p >= N && e_p >= M) break; // �迭 A�� �迭 B �бⰡ ������ while �� ����
	}
	return 0;
}