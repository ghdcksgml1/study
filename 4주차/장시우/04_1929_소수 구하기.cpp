// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2996kb, 시간 : 12ms

#include <iostream>

using namespace std;
bool PN[1000001];

void PrintNum() {
	for (int i = 2; i <= 1000000; i++) {
		if (PN[i] == true) continue;
		for (int j = 2; i * j <= 1000000; j++) {
			PN[i * j] = true;
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k; cin >> n>>k;

	PrintNum();

	PN[0] = true; PN[1] = true;

	int lcm = 1;

	for (int i = n; i <= k; i++) {
		if (PN[i] == false) {
			cout << i << '\n';
		}
	}

	return 0;

}