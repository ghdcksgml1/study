// ��� : C++ , (����/����) : 1/0 , �޸� : 2020 KB , �ð� : 0ms

#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main() {
	int n; cin >> n;
	int cnt = 0;
	while (n != 0) {
		arr[cnt] = n % 10;
		cnt++;
		n /= 10;
	}

	sort(arr, arr + cnt, greater<int>());
	/* sort(start, end, grearter<�ڷ���>())�� �̿��ϸ�
	 [start,end) ������ ���ڸ� ������������ ������ �ش�.*/

	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i];
	}

	return 0;
}