// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 8416 KB , 시간 : 396ms

#include <iostream>
#include <queue>
using namespace std;
queue<int> Queue1; //10845 큐 문제와 달리 전역변수로 선언 - stack메모리가 터지지 않도록

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	string input;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			cin >> temp;
			Queue1.push(temp);
		}
		else if (input == "pop") {
			if (Queue1.empty()) {
				cout << "-1\n";
			}
			else {
				cout << Queue1.front() << "\n";
				Queue1.pop();
			}
		}
		else if (input == "size") {
			cout << Queue1.size() << "\n";
		}
		else if (input == "empty") {
			if (Queue1.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (input == "front") {
			if (Queue1.empty()) {
				cout << "-1\n";
			}
			else {
				cout << Queue1.front() << "\n";
			}
		}
		else if (input == "back")
			if (Queue1.empty()) {
				cout << "-1\n";
			}
			else {
				cout << Queue1.back() << "\n";
			}

	}

	return 0;
}


