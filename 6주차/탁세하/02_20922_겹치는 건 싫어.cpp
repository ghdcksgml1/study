// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 3192 KB , 시간 : 20ms

#include<iostream>
#include<algorithm>

using namespace std;

int A[200001];
int numCount[100001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K; cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> A[i]; // 배열 A에 수열 저장

	int s_p = 0; int e_p = 0;
	int maxCount = 0;
	int maxLength = 0;

	numCount[A[0]]++;
	while (e_p < N) {
		if (numCount[A[e_p]] <= K) {
			maxLength = max(maxLength, e_p - s_p + 1);
			e_p++;
			numCount[A[e_p]]++;
		}
		else {
			numCount[A[s_p]]--;
			s_p++;
			maxLength = max(maxLength, e_p - s_p + 1);
		}
	}

	cout << maxLength;

	return 0;
}