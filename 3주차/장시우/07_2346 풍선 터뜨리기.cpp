// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2156kb, 시간 : 0ms

#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> dq;

int N;

int main(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		dq.push_back(make_pair(num, i + 1)); 
		// 덱에 이동해야할 수와 몇번째였는지 저장
	}
	while (!dq.empty())
	{
		int cur = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) //덱이 비었는데 덱 연산을하면 에러 나므로 break 해주기
			break;

		if (cur > 0)
		{ // 양수이면 이미 출력후 pop을 한번 했기에 cur-1번만 front를 back으로 옮기기
			for (int i = 0; i < cur - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = 0; i < (-1) * cur; i++)
			{ // 음수일 경우 왼쪽 이동이므로 맨뒤의것을 맨앞으로 옮기기
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}


}

/* 풍선터트리기 알고리즘
 1 2 3 4 5 

*3 2 1 -3 -1 => 1

2 1 -3 -1
1 -3 -1 2
*-3 -1 2 1 => 4

1 -1 2
2 1 -1
*-1 2 1 => 5

*1 2 = > 3

*2 => 2
*/
