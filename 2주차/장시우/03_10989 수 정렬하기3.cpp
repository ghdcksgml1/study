// 언어 : C++ , (성공/실패) : 1/2 , 메모리 : 2020 KB , 시간 : 1776ms
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	int n; cin >> n;
	int count[10001] = { 0 };

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		count[t] += 1;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++)
			cout << i << "\n";
	}

	return 0;

}

