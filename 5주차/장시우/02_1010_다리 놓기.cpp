// 언어 : C++, (성공 / 실패) : 2 / 0, 메모리 : 2020kb, 시간 : 0ms

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t, n, m;
	long long num = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		num = 1;
		cin >> n >> m;  // mCn or mC(m-n)

		if (n > m / 2)
			n = m - n;
		for (int j = m; j > m - n; j--)
			num *= j;
		for (int j = n; j > 0; j--)
			num /= j;

		cout << num << '\n';
	}

	return 0;
}
