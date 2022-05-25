// ��� : C++ , (����/����) : 1/2 , �޸� : 2412 KB , �ð� : 12ms

#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) { // arr�� ���� ����
		cin >> arr[i];
	}
	sort(arr, arr + n); // arr �������� ����

	int x; cin >> x;
	int i = 0;  int j = n - 1;
	int sum = arr[0] + arr[n-1];
	int cnt = 0;

	while (j > i) { // i<j
		if (sum == x) cnt++;
		if (sum <= x) {
			i++;
			sum = arr[i] + arr[j];
		}
		else {
			j--;
			sum = arr[i] + arr[j];
		}
	}
	cout << cnt;

	return 0;
}