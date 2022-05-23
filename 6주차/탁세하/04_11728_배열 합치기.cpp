// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 9832 KB , 시간 : 640ms

#include<iostream>
#include<algorithm>

using namespace std;

int arr[2000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N + M; i++) { // arr에 배열 A,B값 저장
		cin >> arr[i];
	}
	sort(arr, arr + N + M); // arr 오름차순 정렬
	for (int i = 0; i < N + M; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}