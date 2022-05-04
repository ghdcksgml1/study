// 언어 : C++ , (성공/실패) : 1/8 , 메모리 : 3132 KB , 시간 : 24ms

#include<iostream>
#include<vector>

using namespace std;

bool PN[1000001];

void PrimeNum() { // 부울 배열 PN의 0~1000000까지의 인덱스 값 중 소수인 인덱스 요소만 false
	PN[0] = true; PN[1] = true;
	for (int i = 2; i <= 1000000; i++) {
		for (int j = 2; i * j <= 1000000; j++) {
			if (PN[i * j] == true) continue;
			else PN[i * j] = true;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	vector<int> v, vPrime;
	for (int i = 0; i < N; i++) { // 입력된 수열 벡터 v에 저장
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	long long multiple = 1; // 자료형 주의! 답이 2의 63제곱 이하이므로 int 사용하면 안된다!
	PrimeNum();
	for (int i = 0; i < N; i++) {
		if (PN[v[i]] == false) { // 입력된 수열의 값이 소수이면 multiple에 곱하고, vPrime에 추가한다.
			multiple *= v[i];
			PN[v[i]] = true; // 중복 방지!!!!!!!! 이렇게 해도 되나..?
			vPrime.push_back(v[i]);
		}
	}
	if (vPrime.size() == 0) multiple = -1; // vPrime의 요소가 없으면 multiple은 -1
	cout << multiple;
}