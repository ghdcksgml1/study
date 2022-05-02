// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 5716kb, 시간 : 40ms
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<bool> PN(1, false);
vector<int> Prime; //소수 벡터

void PrimeNum(int size) { //소수 벡터 생성
	PN.resize(size + 1);
	for (int i = 2; i <= size; i++) {
		if (PN[i] == true) continue;
		for (int j = 2; i * j <= size; j++) {
			PN[i * j] = true;
		}
	}
	for (int i = 2; i <= size; i++) {
		if (PN[i] == false) {
			Prime.push_back(i);
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	PrimeNum(N); //소수 벡터 Prime 생성

	int count = 0; //경우의 수 (출력값)
	int sum = 0; //소수의 합

	deque<int> deque; //소수들을 차례로 넣어줄 deque(나중에 sum이 넘칠때 sum에서 뺄 소수를 잠시 기억해줌)

	for (int i = 0; i < Prime.size(); i++) { //Prime[0], Prime[1],...에 소수가 차례로 들어있음

		deque.push_back(Prime[i]); //현재 소수를 deque에 넣음
		sum += Prime[i]; //현재 소수를 일단 sum에 더하고 비교
		
		while (sum > N) { //찾는 값보다 sum이 넘친다면 deque에서 가장 작은 원소부터 계속해서 빼나간다
			//if (deque.size() < 1) break; 
			sum -= deque.front();
			deque.pop_front(); //가장 작은 원소를 계속해서 빼
		}
    
    //deque에서 가장 작은 원소들을 계속 빼나가 sum == N이 되거나, whlie루프를 돌지 않고도 sum == N이 되었을 때
    if (sum == N) { //찾는 값과 같아 count 증가
			count++;
		}
		
	}
	cout << count;

	return 0;
}
