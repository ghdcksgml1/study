// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 3196 KB , 시간 : 20ms
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> arr;
int countArr[100001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, K;
	cin >> N >> K;
	arr.resize(N+1);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	int sp = 0;
	int ep = 0;

	int maxLength = 0;

	countArr[arr[0]] = 1;

	while (ep < N) {
		if (countArr[arr[ep]] > K) {
			countArr[arr[sp]]--;
			sp++;
		}

		else{
			maxLength = max(maxLength, ep - sp + 1);
			ep++;
			countArr[arr[ep]]++;
		}
	}

	cout << maxLength;

	return 0;
}
