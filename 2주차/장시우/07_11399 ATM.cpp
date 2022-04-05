// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int n; cin >> n;
	int* time = new int[n];
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		time[i]=t;
	}

	sort(time, time + n, greater<int>());

	int t2=0,sum=0;

	for (int i = 0; i < n; i++)
	{
		sum += (i + 1) * time[i]; //
	}
	cout << sum<<"\n";
	return 0;

}

