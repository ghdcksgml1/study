// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 56ms

#include<iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K; cin >> N >> K;
	queue<int> circle; // 숫자 저장 큐
	for (int i = 0; i < N; i++) { // 큐에 숫자 저장
		circle.push(i + 1);
	}
	cout << "<";
	while (circle.size() - 1) { 
		for (int i = 0; i < K - 1; i++) { // k번째 값 추출하기 위해 그 앞의 값들 pop
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", "; // k번째 값 출력 후 pop
		circle.pop();
	}
	cout << circle.front() << ">";
}