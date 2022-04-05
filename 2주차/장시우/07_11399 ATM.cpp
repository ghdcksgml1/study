// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000;

int n;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int time[MAX];

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}

	sort(time, time + n, greater<int>());
	// 내림차순 정렬 greater<자료형>()

	int sum=0;

	for (int i = 0; i < n; i++)
	{
		sum += (i + 1) * time[i];
	}
	/*예를 들어, sort 후에{1, 2, 3, 4, 5}일 때, 
	1은 5번 더해지고 2는 4번, 3은 3번, 4는 2번, 5는 1번 더해진다.
	그걸 이용해서  sum += (i + 1) * time[i]; 로 해주면 된다
	= 그리디 알고리즘
	*/

	cout << sum<<"\n";
	return 0;

}


