// 언어 : C++, (성공 / 실패) : 1 / 1, 메모리 : 8416kb, 시간 : 380ms

#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int N, x;
string s;
queue<int> q;

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;

		if (s == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (s == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';

		}
		else if (s == "size")
		{
			cout << q.size() << '\n';
		}
		else if (s == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (s == "front")
		{
			if (!q.empty()) cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else // s == "back"
		{
			if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
	}

}