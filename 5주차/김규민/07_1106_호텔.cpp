// 언어 : C++ , (성공/실패) : 1/3 , 메모리 : 2412 KB , 시간 : 4ms
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int memo[100001]; //값으로 고객수가 들어있는 memo
vector <pair<int, int>> city; //비용, 고객

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int C, N; //홍보할 수 있는 도시의 개수 N, 적어도 C명 늘려야 함 
	cin >> C >> N;
	city.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> city[i].first >> city[i].second;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= 100000; j++) {
			if(j >= city[i].first) memo[j] = max(memo[j], memo[j - city[i].first] + city[i].second);
		}
	}

	for (int i = 0; i <= 100000; i++) {
		if (memo[i] >= C) {
			cout << i;
			break;
		}
	}

	return 0;
}
