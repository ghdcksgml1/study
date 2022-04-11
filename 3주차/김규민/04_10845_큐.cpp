// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	string input;
	queue<int> Queue1; 
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") { //입력 문자열이 "push"일때
			cin >> temp;
			Queue1.push(temp);
		}
		else if (input == "pop") { //입력 문자열이 "pop"일때
			if (Queue1.empty()) { //비어있다면 pop 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Queue1.front() << "\n";
				Queue1.pop();
			}
		}
		else if (input == "size") { //입력 문자열이 "size"일때
			cout << Queue1.size() << "\n";
		}
		else if (input == "empty") { //입력 문자열이 "empty"일때
			if (Queue1.empty()) { 
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (input == "front") { //입력 문자열이 "front"일때
			if (Queue1.empty()) { //비어있다면 front 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Queue1.front() << "\n";
			}
		}
		else if (input == "back") //입력 문자열이 "back"일때
			if (Queue1.empty()) { //비어있다면 back 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Queue1.back() << "\n";
			}

	}

	return 0;
}


