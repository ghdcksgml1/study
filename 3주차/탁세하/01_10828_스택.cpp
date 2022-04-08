// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 4ms

#include<iostream>
#include<string>
#include<stack> // stack 라이브러리 사용

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	string stmp; // 입력 명령어
	int ntmp; // 입력 정수값
	stack<int> st;

	for (int i = 0; i < N; i++) {
		cin >> stmp;
		if (stmp.compare("push") == 0) {
			cin >> ntmp;
			st.push(ntmp);
		}
		if (stmp.compare("pop") == 0) {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		if (stmp.compare("size") == 0) {
			cout << st.size() << '\n';
		}
		if (stmp.compare("empty") == 0) {
			cout << st.empty() << '\n';
		}
		if (stmp.compare("top") == 0) {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
		}
	}
}