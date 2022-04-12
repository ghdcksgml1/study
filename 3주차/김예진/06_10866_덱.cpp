#include <iostream>
#include <algorithm>
#include <deque>
#include <string> 

using namespace std;

//!!!덱은 큐와 구조가 비슷하지만, 값을 앞과 뒤에서 모두 넣고, 뺄 수 있음
deque<int> deq;

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
		if (s == "push_front") {//맨 앞에 값 집어넣음//인자(num) 있음//출력 없음
			cin >> num;
			deq.push_front(num);
		}
		if (s == "push_back") {//맨 뒤에 값 집어넣음//인자(num) 있음//출력 없음
			cin >> num;
			deq.push_back(num);

		}

		else if (s == "pop_front") {//맨 앞의 값 하나 뺀다//나온 값 출력//값 없으면 -1 출력
			if (!deq.empty()) {//if(deq.empty())로도 가능//실행 문만 반대로
				cout << deq.front() << "\n";//pop한 값 출력하려면//deq.front()하고 deq.pop_front()
				deq.pop_front();
			}
			else cout << -1 << "\n";
		}
		else if (s == "pop_back") {//맨 뒤의 값 하나 뺀다//나온 값 출력//값 없으면 -1 출력
			if (!deq.empty()) {//if(deq.empty())로도 가능//실행 문만 반대로
				cout << deq.back() << "\n";//pop한 값 출력하려면//deq.back()하고 deq.pop_back()
				deq.pop_back();
			}
			else cout << -1 << "\n";
		}

		else if (s == "size") {//dequeue의 사이즈 반환
			cout << deq.size() << "\n";
		}

		else if (s == "empty") {//dequeue가 비어있으면 true(1), 비어있지 않으면 false(0) 반환
			cout << deq.empty() << "\n";
		}

		else if (s == "front") {//dequeue의 맨 앞의 값을 반환함
			if (!deq.empty()) {
				cout << deq.front() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (s == "back") {//dequeue의 맨 뒤의 값을 반환함
			if (!deq.empty()) {
				cout << deq.back() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}