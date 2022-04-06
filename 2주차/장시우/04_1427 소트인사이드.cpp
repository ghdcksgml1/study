// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	int cnt = 0;
	while (n != 0) {
		arr[cnt] = n % 10;
		cnt++;
		n /= 10;
	}

	sort(arr, arr + cnt, greater<int>());
	/* sort(start, end, grearter<자료형>())를 이용하면
	 [start,end) 범위의 인자를 내림차순으로 정렬해 준다.*/

	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i];
	}

	return 0;
}
