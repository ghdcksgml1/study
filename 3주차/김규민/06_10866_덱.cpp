// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <deque>
using namespace std;
deque<int> Deque1; 

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	string input;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push_front") {
			cin >> temp;
			Deque1.push_front(temp);
		}
		else if (input == "push_back") { 
			cin >> temp;
			Deque1.push_back(temp);
		}
		else if (input == "pop_front") {  
			if (Deque1.empty()) { //비어있다면 pop 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Deque1.front() << "\n";
				Deque1.pop_front(); 
			}
		}
		else if (input == "pop_back") {
			if (Deque1.empty()) { //비어있다면 pop 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Deque1.back() << "\n";
				Deque1.pop_back();
			}
		}
		else if (input == "size") {
			cout << Deque1.size() << "\n";
		}
		else if (input == "empty") {
			if (Deque1.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (input == "front") {
			if (Deque1.empty()) { //비어있다면 front 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Deque1.front() << "\n";
			}
		}
		else if (input == "back")
			if (Deque1.empty()) { //비어있다면 back 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout << Deque1.back() << "\n";
			}

	}

	return 0;
}


