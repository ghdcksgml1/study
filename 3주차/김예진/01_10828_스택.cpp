#include <iostream>
#include <algorithm>
#include <stack>
#include <string> 
//문자열 처리 필요//#include <cstring>에서 strcmp로 비교도 가능

using namespace std;

stack<int> st;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string s;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> s;//위치 중요!!!
		if (s == "push") {//맨 뒤(위)에 값 집어넣음//출력 없음
			cin >> num;
			st.push(num);
		}
		else if (s == "pop") {//맨 뒤(위)에 값 하나 빠져나옴//나온 값 출력//값 없으면 -1 출력
			if (!st.empty()) {//if(st.empty())로도 가능!!
				cout << st.top() << "\n";//pop한 값 출력하려면//st.top()하고 st.pop()
				st.pop();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {//stack의 사이즈 반환//st.size()!!
			cout << st.size() << "\n";//endl보다 "\n"이 더 빠름
		}
		else if (s == "empty") {
			/*
			if (!st.empty()) {
				cout << 0;
			}
			else cout << 1;
			*/
			//원래 stack 자체가 스택.empty()를 쓰면
			//비어있으면 true(1)//비어있지 않으면 false(0)을 리턴함!!!
			cout << st.empty() << "\n";
		}
		else if (s == "top") {//stack의 맨 위(뒤)의 값을 반환함
			if (!st.empty()) {
				cout << st.top() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}
