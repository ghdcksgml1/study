// 언어 : C++ , (성공/실패) : 1/2 , 메모리 : 2264 KB , 시간 : 12ms
#include <iostream>
#include<vector>
#include<math.h>
#include<map>

using namespace std;
vector<int> sushi;
map <int, int> check;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, d, k, c;
	int length = 0;

	cin >> N >> d >> k >> c;

	sushi.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> sushi[i];
	}
	for (int i = N-k; i < N; i++) {
		check[sushi[i]]++;
	}
	

	for (int i = 0; i < N; i++) {
		check[sushi[i]]++;
		check[sushi[(N + i - k) % N]]--; //sliding window
		if (check[sushi[(N + i - k) % N]] <= 0) {
			check.erase(sushi[(N + i - k) % N]);
		}
		//종류의 수 count, 만일 쿠폰에 해당하는 스시가 경우에 포함되어있지 않다면 + 1
		length = check.count(c) == 0 ? max(length, (int)check.size() + 1) : max(length, (int)check.size());
	}

	cout << length;
	return 0;
}
