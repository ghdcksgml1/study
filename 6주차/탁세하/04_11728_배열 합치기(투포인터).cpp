// 언어 : C++ , (성공/실패) : 1/2 , 메모리 : 9832 KB , 시간 : 512ms

#include<iostream>

using namespace std;

int arrA[1000000];
int arrB[1000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) { // arrA에 배열 A값 저장
		cin >> arrA[i];
	}
	for (int i = 0; i < M; i++) { // arrB에 배열 B값 저장
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
		if (s_p >= N && e_p >= M) break; // 배열 A와 배열 B 읽기가 끝나면 while 문 종료
	}
	return 0;
}