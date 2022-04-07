// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 5928 KB , 시간 : 272ms

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
}
