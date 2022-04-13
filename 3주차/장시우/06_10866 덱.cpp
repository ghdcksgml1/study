// 언어 : C++, (성공 / 실패) : 1 / 3, 메모리 : 2024kb, 시간 : 4ms

#include <iostream>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	deque<int> t;

	while (n--) {
		string s; cin >> s;
		if (s == "push_front") {
			int x; cin >> x;
			t.push_front(x);
		}
		else if (s == "push_back") {
			int x; cin >> x;
			t.push_back(x);
		}
		else if (s == "pop_front") {
			if (!t.empty()) {
				cout << t.front() << '\n';
				t.pop_front();
			}
			else
				cout << -1 <<'\n';
		}
		else if (s == "pop_back") {
			if (!t.empty()) {
				cout << t.back() << '\n';
				t.pop_back();
			}
			else
				cout << -1 << '\n';
		}
		else if (s == "size") {
			cout << t.size() << '\n';
		}
		else if (s == "empty") {
			if (!t.empty())
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
		else if (s == "front") {
			if (!t.empty())
				cout << t.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (s == "back") {
			if (!t.empty())
				cout << t.back() << '\n';
			else
				cout << -1 << '\n';
		}

	}

	
	return 0;
}