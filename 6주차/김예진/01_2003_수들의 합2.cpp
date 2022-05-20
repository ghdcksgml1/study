#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	//배열 동적 생성
	int* arr = new int[N];

	int M;
	cin >> M;

	int L;
	for (int i = 0; i < N; i++) {
		cin >> L;
		arr[i] = L;
	}

	int sum = arr[0], check = M, count = 0;
	int s_p = 0, e_p = 0;
	while (e_p < N) {
		if (sum == check) {
			count++;
		}
		//sum이 check보다 작으면 e_p를 증가시키고,
		//sum이 check보다 크면 s_p를 증가시킨다. 
		if (sum < check) {
			//e_p는 증가시킨 다음에 그 값을 더해주고 
			e_p++;
			sum += arr[e_p];
		}
		else {
			//sum이 check보다 크거나 같으면 그 값을 빼주고, s_p를 증가시킨다.
			sum -= arr[s_p];
			s_p++;
		}
	}
	//동적배열 공간 반납 안해줘도 됨
	delete arr;

	cout << count;

	return 0;
}