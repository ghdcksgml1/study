// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2020 KB , 시간 : 0ms

#include<iostream>

using namespace std;

long memo[30]; // nCn, n+1Cn, n+2Cn, ... ,mCn값 저장

// 다리를 지을 수 있는 경우의 수는 mCn(서로 다른 M개 중 N개를 선택하는 경우의 수)이므로, mCn = m/(m-n) * m-1Cn (m != n)을 점화식으로 사용한다.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	int N, M;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		memo[0] = 1; // nCn = 1
		if (N == M) { cout << memo[0] << '\n'; } // nCn인 경우
		else {
			for (int i = 1; i <= M - N; i++) {
				memo[i] = ((N + i) * memo[i - 1]) / i; // 점화식. double형 사용하면 X
			}
			cout << memo[M - N] << '\n';
		}
	}
}