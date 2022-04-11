// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string input;
	int temp;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		stack<int> Stack1; //(가 입력되면 stack에 원소를 넣고, )가 입력되면 stack에 원소를 빼서 stack의 길이로 판단
		cin >> input;
		for(int j = 0; j < input.length(); j++){
			if (input[j] == '(') {
				Stack1.push(1);
			}
			else {
				if ((Stack1.size() != 0) && (Stack1.top() == 1)) {
					Stack1.pop();
				}
				else { // ())나 )와 같은 경우. 답이 될 수 없음
					Stack1.push(0); //stack에서 뺼 수 없는 값인 0을 넣어 Stack의 길이가 0이 될 수 없도록 한다
				}
			}
		}
		if (Stack1.size() == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}


