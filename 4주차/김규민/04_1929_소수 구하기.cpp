// 언어 : C++, (성공 / 실패) : 1 / 2, 메모리 : 2264kb, 시간 : 24ms
#include <iostream>
#include <vector>
using namespace std;

vector<bool> PN(1, false);

int PrimeNum(int size) { //에라토스테네스의 체
	int lastPrime = size; //출력 양식을 맞추기 위해 넣었는데(마지막 원소 출력 후 줄바꿈 없음), 없어도 정답처리된다
	PN.resize(size + 1);
	for (int i = 2; i <= size; i++) {
		if (PN[i] == true) continue;
		
		for (int j = 2; i * j <= size; j++) {
			PN[i * j] = true;
			if (PN[lastPrime] == true) lastPrime--; 
		}
	}
	return lastPrime;
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, N;
	cin >> M >> N;

	int lastPrime = PrimeNum(N); //N을 bool vector의 size로 주고, 범위 내 가장 큰 소수를 받아온다
  
	PN[0] = true; //0, 1은 소수 아님
	PN[1] = true;

	for (int i = M; i <= N; i++) {
		if (i == lastPrime) { //마지막 소수라면 줄바꿈 문자 출력 x
			cout << i;
			break;
		}
		if (PN[i] == false){
			cout << i << "\n";
		}
	}

	return 0;
}
