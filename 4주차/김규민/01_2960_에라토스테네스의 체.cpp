// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2020kb, 시간 : 0ms
#include <vector>
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	cin >> N >> K;
	vector<bool> PN(N+1); //N+1만큼 bool vector선언(초기화 false)
	int count = 0; 
	int i, j;
	for (i = 2; i <= N; i++) {
		for (j = 1; i * j <= N; j++) { //소수도 지워주는 수이니 j = 1부터
			if (PN[i*j] == true) continue; //true, 즉 소수이면 건너뛴다
			PN[i * j] = true;
			count++;

			if (count == K) { 
				cout << i * j; 
				return 0;
			}
		}	
	}
}
