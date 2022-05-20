// 언어 : C++ , (성공/실패) : 1/3 , 메모리 : 5928 KB , 시간 : 4ms
#include <iostream>
#include <vector>
using namespace std;

int memo[1000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;

	memo[1] = 0;
	memo[2] = 1;
	memo[3] = 1;

	for (int i = 4; i <= N; i++) {
		if (i % 3 == 0) {
			memo[i] = min(memo[i / 3], memo[i - 1]) + 1;
		}
	
		else if (i % 2 == 0){
			memo[i] = min(memo[i / 2], memo[i - 1]) + 1;
		}

		else {
			memo[i] = memo[i - 1] + 1;
		}

		if (i % 6 == 0) {
			memo[i] = min(memo[i / 2], memo[i / 3]) + 1;
		}
		
	}
	cout << memo[N];
		
	
	return 0;
}
