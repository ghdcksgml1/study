// ��� : C++ , (����/����) : 1/0 , �޸� : 9832 KB , �ð� : 640ms

#include<iostream>
#include<algorithm>

using namespace std;

int arr[2000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N + M; i++) { // arr�� �迭 A,B�� ����
		cin >> arr[i];
	}
	sort(arr, arr + N + M); // arr �������� ����
	for (int i = 0; i < N + M; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}