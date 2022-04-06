 // 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024kb , 시간 : 0ms

#include <iostream>
#include <algorithm>


using namespace std;

int arr[1000000];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	for (int i = 0; i < n; i++) {
		cout << arr[i]<<"\n";
	}

	return 0;

}
