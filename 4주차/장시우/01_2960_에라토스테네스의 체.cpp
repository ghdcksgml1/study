// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2020kb, 시간 : 0ms


#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, k, cnt = 0;
	cin >> n >> k;

	vector<int> v(n + 1);

	for (int i = 0; i < n; i++)
		v[i] = i;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j += i) {
			if (v[j] != 0) {
				v[j] = 0;
				cnt++;
				if (cnt == k)
					cout << j << '\n';
			}
		}
	}

	return 0;
}