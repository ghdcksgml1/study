// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 4ms

#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	deque<int> d;
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		string stmp; cin >> stmp; // 입력 명령어

		if (stmp.compare("push_front") == 0) {
			int X; cin >> X; // 입력 정수값
			d.push_front(X);
		}
		if (stmp.compare("push_back") == 0) {
			int X; cin >> X; // 입력 정수값
			d.push_back(X);
		}
		if (stmp.compare("pop_front") == 0) {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		if (stmp.compare("pop_back") == 0) {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		if (stmp.compare("size") == 0) {
			cout << d.size() << '\n';
		}
		if (stmp.compare("empty") == 0) {
			cout << d.empty() << '\n';
		}
		if (stmp.compare("front") == 0) {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
			}
		}
		if (stmp.compare("back") == 0) {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
			}
		}
	}
}