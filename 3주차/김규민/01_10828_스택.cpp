// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <stack>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string input;
	stack<int> Stack1;
	int temp;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") { //입력 문자열이 "push"일때
			cin >> temp;
			Stack1.push(temp);
		}
		else if (input == "pop") { //입력 문자열이 "pop"일때
			if (Stack1.empty()) { //비어있다면 pop 하지 않음 _ runtime error 방지
				cout << "-1\n";
			}
			else{
				cout << Stack1.top() << "\n";
				Stack1.pop();
			}
		}
		else if (input == "size") { //입력 문자열이 "size"일때
			cout << Stack1.size() << "\n";
		}
		else if (input == "empty") { //입력 문자열이 "empty"일때
			if (Stack1.empty()) { 
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (input == "top") { //입력 문자열이 "top"일때
			if (Stack1.empty()) { //비었다면 top실행 x _ runtime error 방지
				cout << "-1\n";
			}
			else {
				cout <<Stack1.top() <<"\n";
			}
		}
		
	}
	return 0;
}


