// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include<iostream>

using namespace std;

long long memo[21];

int main() {
	int N; cin >> N;
	memo[0] = 0; memo[1] = 1;

	// 바텀업 방식
	for (int i = 2; i <= N; i++) {
		memo[i] = memo[i - 1] + memo[i - 2]; // 점화식
	}
	cout << memo[N] << '\n';
}