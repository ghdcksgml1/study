#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool descendingSort(int num1, int num2) {
	return num1 > num2;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string N; cin >> N;
	int intN = size(N);
	int intArr[10];

	for (int i = 0; i < intN; i++) {
		intArr[i] = N[i] - '0'; // ���ڷ� ���� N ������ ��ȯ
	}
	
	sort(intArr, intArr + intN, descendingSort);

	for (int i = 0; i < intN; i++) {
		cout << intArr[i];
	}
}