//문제 자체가 잘 이해가 가진 않음
//입력 7 3
//출력 <3, 6, 2, 7, 5, 1, 4>
//이라는데 출력에서 왜 3 뒤에 6???

//코드 참조
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

queue <int> que;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		que.push(i+1);//큐에 1,2,3,4,...,N 넣어줌
	}
	cout << "<";
	while (que.size()-1) {
		//(7, 3)이면 1~2번 까지 push, pop하고
		//3번은 출력하고 pop해주기
		for (int j = 0; j < K-1; j++) {
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	//큐 que에 원소가 1개만 남았을 때 while(0) 조건문 멈추고 
	//마지막 1개 원소 출력
	cout << que.front() << ">";
	return 0;
}