// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2020kb, 시간 : 0ms
#include <vector>
#include <iostream>
using namespace std;

bool PN[1001];

void PrimeNum() { //에라토스테네스의 체
	int count = 0;
	for (int i = 2; i <= 1000; i++) {
		if (PN[i] == true) continue;
		for (int j = 2; i * j <= 1000; j++) {
			PN[i*j] = true;
		}
	}
}
//먼저 소수 배열을 만들어놓고, 사용자 입력과 비교해서 소수의 개수를 count한다

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	int count = 0;
	vector<int> vec1;
	
	cin >> N; //수의 개수, N은 100 이하
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		vec1.push_back(temp);
	}

	PN[0] = true; //0, 1은 소수가 아님
	PN[1] = true;

	PrimeNum(); //PN 

	for (int i = 0; i < vec1.size(); i++) {
		if (PN[vec1[i]] == false) {
			count++;
		}
	}

	cout << count;
	return 0;
	
}
