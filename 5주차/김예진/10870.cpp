//탑다운 방식
//피보나치가 x=5일때, x=4,3,2,1 쭉 위에서부터 호출하면서 내려가면서 
//값을 구해 마지막으로 x=5의 값이 업데이트

#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>

using namespace std;
long long memo[1001];

long long fib(int x) {
	if (x == 0) return 0;
	if (x == 1) return 1;
	if (memo[x] != 0) return memo[x];
	memo[x] = fib(x - 1) + fib(x - 2);
	return memo[x];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	memo[0] = 0; memo[1] = 1;
	for (int i = 2; i <= N; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}

	cout << memo[N];

	return 0;
}

//바텀업 방식-아래에서부터 위로 쌓아나가는 방식
/*
#include <iostream>

using namespace std;

long long memo[1001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	memo[0] = 0; memo[1] = 1;
	for (int i = 2; i <= N; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}

	cout << memo[N] << '\n';

	return 0;
}
*/