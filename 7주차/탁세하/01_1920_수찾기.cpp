// ��� : C++ , (����/����) : 1/0 , �޸� : 2412 KB , �ð� : 56ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int arrA[100010];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	}
	sort(arrA, arrA + N); // �������� ����
	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int target; cin >> target;
		cout << binary_search(arrA, arrA + N, target) << '\n';
	}

	return 0;
}