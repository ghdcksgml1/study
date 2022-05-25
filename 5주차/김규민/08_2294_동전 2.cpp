// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2412 KB , 시간 : 4ms

#include <iostream>
#include <vector>
using namespace std;

int memo[100001]; //1 ≤ k ≤ 10, 000
vector <int> coin; //동전 최소 사용 횟수

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	int temp;
	coin.resize(n);

	for (int i = 0; i < 100001; i++) {
		memo[i] = 2e9; //min을 통해 동전 사용 횟수를 선택할 것이기 때문에 정수 범위의 임의의 큰 수 지정해 초기화
	}

	for (int i = 0; i < n; i++) {
		cin >> temp;
		coin[i] = temp;
		memo[coin[i]] = 1; //coin값만큼의 가격을 만족시키는 동전의 최소 개수는 1개
	}

	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= k; j++) { 
			//동전을 한번이라도 사용했다면 2e9값이 나오지 않는다
			memo[j] = min(memo[j], memo[j - coin[i]] + 1);
		}
	}

	if (memo[k] == 2e9) {
		cout << "-1";
	}
	else {
		cout << memo[k];
	}
	

	return 0;
}
