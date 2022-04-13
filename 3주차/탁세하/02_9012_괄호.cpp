// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 4ms

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		stack<char> s; // 괄호 문자열 받을 스택
		string stmp; cin >> stmp; // 괄호 문자열
		for (int i = 0; i < stmp.size(); i++) { // 문자열 길이만큼 반복
			char ctmp; ctmp = stmp[i];
			if (ctmp == '(') { // '(' 입력되면 스택에 저장
				s.push(ctmp);
			}
			else { 
				if (s.empty()) { // ')' 입력됐을 때 스택 비어있으면 push해서 스택 채우고 for문 빠져나오기
					s.push(ctmp);
					break;
				}
				else { // ')' 입력됐을 때 스택 채워져 있으면 '(' pop 시키기
					s.pop();
				}
			}
		}
		if (s.empty()) { // 스택 비워져 있으면 vps
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
}
