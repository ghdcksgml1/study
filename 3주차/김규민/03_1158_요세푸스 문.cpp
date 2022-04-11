// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2152 KB , 시간 : 64ms

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	cin >> N >> K;
	queue<int> Queue1; //선입선출 큐 선언

	for (int i = 1; i < N+1; i++) {
		Queue1.push(i);
	}
	
	cout << "<";
	
	while (Queue1.size() > 1) { //Stack1의 size가 2이상일 때 빈복
		for (int i = 0; i < K-1; i++) { //k-1번동안 최상단 원소를 최하단으로 넣고, 최상단의 원소를 빼는 작업 반복
			Queue1.push(Queue1.front());
			Queue1.pop();
		}
		cout << Queue1.front() << ", "; //앞선 작업 후 제일 앞에 오는 원소가 출력할 원소가 된다
		Queue1.pop();
	}
	cout << Queue1.front() << ">"; //마지막 원소 출력 (출력양식을 맞추기 위해 따로 뻄)
	

	return 0;
}


