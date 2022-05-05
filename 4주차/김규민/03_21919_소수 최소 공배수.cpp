// 언어 : C++, (성공 / 실패) : 1 / 5, 메모리 : 2184kb, 시간 : 8ms
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<bool> PN(1, false);

void PrimeNum(int size) { //에라토스테네스의 체
	PN.resize(size+1); 
	for (int i = 2; i <= size; i++) {
		if (PN.at(i) == true) continue;
		for (int j = 2; i * j <= size; j++) {
			PN[i * j] = true;
		}
	}
}
// PrimeNum 함수 : size를 입력받아, 그만큼 소수 배열의 크기를 정한다 
//(bool 소수 배열과 사용자 입력을 비교해 소수인지 판별)


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	int count = 0;

	cin >> N; //수열A의 길이(1 이상 10,000 이하)
	vector<int> vec1(N);

	int temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		vec1[i] = temp;
	}

	sort(vec1.begin(), vec1.end());

	PrimeNum(vec1[N - 1]); //size 넘긴다

	long long int mul = 1; //답이 2^63 미만
	bool flag = 0; //한번이라도 소수가 나왔다면 flag = true

	for (int i = 0; i < N; i++) {
		if (PN.at(vec1[i]) == false) {
			flag = true;
			mul *= vec1[i];
			PN.at(vec1[i]) = true; //한 번 거친 소수는 다시 출력하지 않는다
		}
	}
	if (flag == 0) cout << -1;
	else cout << mul;

	return 0;

}
