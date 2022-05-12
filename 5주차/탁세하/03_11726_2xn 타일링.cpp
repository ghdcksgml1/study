// 언어 : C++ , (성공/실패) : 1/4 , 메모리 : 2028 KB , 시간 : 0ms

#include<iostream>

using namespace std;

long long memo[1001];

// 점화식 s[n] = s[n-1] + s[n-2]을 사용한다.
int main() {
	int n; cin >> n;
	memo[1] = 1; memo[2] = 2;
	for (int i = 3; i <= n; i++) {
		memo[i] = (memo[i - 1] + memo[i - 2]) % 10'007; // 점화식
	}
	cout << memo[n];
}