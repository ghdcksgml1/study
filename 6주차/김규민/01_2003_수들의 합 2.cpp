// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms
#include <iostream>
#include <vector>

int vector[10001];

using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	cin >> N >> M;
	int sp = 0;
	int ep = 0;

	int count = 0;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> vector[i];
	}
	int sum = vector[0];

	while (ep < N) {
		if (sum == M) count++;
		if (sum >= M) {
			sum -= vector[sp];
			sp++;
		}
		else {
			ep++;
			sum += vector[ep];
		}
	}

	cout << count;

	return 0;
}
