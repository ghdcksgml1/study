// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2412 KB , 시간 : 12ms

#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001]; // 수열 입력값

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, S; cin >> N >> S;
	for (int i = 0; i < N; i++) { // 수열 저장
		cin >> arr[i];
	}

	int s_p = 0; int e_p = 0;
	int sum = arr[0]; // 수열의 합
	int minLength = 100001;

	while (e_p < N) {
		if (sum < S) {
			e_p++;
			sum += arr[e_p];
		}
		else {
			minLength = min(minLength, e_p - s_p + 1);
			sum -= arr[s_p];
			s_p++;
		}
	}
	if (minLength == 100001) cout << 0;
	else cout << minLength;

	return 0;
}