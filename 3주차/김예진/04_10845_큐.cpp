#include <iostream>
#include <algorithm>
#include <queue>
#include <string> 

using namespace std;

queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {//맨 뒤에 값 집어넣음//인자(num) 있음//출력 없음
			cin >> num;
			q.push(num);
		}
		else if (s == "pop") {//맨 앞의 값 하나 뺀다//나온 값 출력//값 없으면 -1 출력
			if (!q.empty()) {//if(q.empty())로도 가능//실행 문만 반대로
				cout << q.front() << "\n";//pop한 값 출력하려면//st.top()하고 st.pop()
				q.pop();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {//queue의 사이즈 반환
			cout << q.size() << "\n";
		}
		else if (s == "empty") {//queue가 비어있으면 true(1), 비어있지 않으면 false(0) 반환
			cout << q.empty() << "\n";
		}
		else if (s == "front") {//queue의 맨 앞의 값을 반환함
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (s == "back") {//queue의 맨 뒤의 값을 반환함
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}
