// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

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
		intArr[i] = N[i] - '0'; // ¹®ÀÚ·Î ÀÐÀº N Á¤¼ö·Î º¯È¯
	}
	
	sort(intArr, intArr + intN, descendingSort);

	for (int i = 0; i < intN; i++) {
		cout << intArr[i];
	}
}
