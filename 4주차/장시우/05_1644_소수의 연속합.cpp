// 언어 : C++, (성공 / 실패) : 1 / 1, 메모리 : 5596kb, 시간 : 28ms

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> v(n + 1, 1);

	for (int i = 2; i * i <= n; i++) {
		if (v[i] == 0) continue;
		for (int j = i + i; j <= n; j += i) {
			v[j] = 0;//j는 i의 배수이기 때문에 소수가 아님
		}
	}

	vector<int> prime;

	for (int i = 2; i <= n; i++) {
		if (v[i]) prime.push_back(i);
	}

	/*소수 값을 참조할 인덱스를 저장할 두개의 변수 선언 -> 투포인터
	sum은 연속된 소수의 값, ans는 경우의 수 */

	int s = 0, e = 0, sum = 0, ans = 0;

	while (true) {
		if (sum > n) {
			sum -= prime[s];
			s++;
		}
		else if (sum < n) {
			if (e >= prime.size()) break; //e가 소수를 저장한 벡터의 크기와 같거나 크다면 멈춤
			sum += prime[e];
			e++;
		}
		else { // sum과 n이 같을때 경우의 수 ans ++ 
			ans++;
			if (e >= prime.size()) break; //e가 소수를 저장한 벡터의 크기와 같거나 크다면 멈춤
			sum += prime[e];
			e++;
		}
	}
	cout << ans << '\n';

	return 0;
}