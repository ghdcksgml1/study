// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include<iostream>

using namespace std;

int memo[1000];

// 점화식 f[n] = f[n-1] + f[n-2] + f[n-3]을 사용한다.
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int n; cin >> n;
		memo[1] = 1; memo[2] = 2; memo[3] = 4;
		for (int i = 4; i <= n; i++) {
			memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3]; // 점화식
		}
		cout << memo[n]<< '\n';
	}
}