//코드 참조
//메모리 제한 때문에 입력받은 값을 배열에 저장하지 않음
//!!!입력 받은 숫자의 인덱스에 값을 개수만큼 증가시켜줌
//ex)2 3 3 입력 받으면 nums[2]=1, nums[3]=2
//배열을 처음에 크기 10001로 이미 설정해주었기 때문에 
//출력시 반복조건은 max(최대값)까지이고,
//입력 받을 때 최대값을 설정함
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//1 ≤ N ≤ 10,000,000
	int N;
	cin >> N;

	//N 개의 숫자 입력
	int nums[10001] = { 0 };
	int max = 0;
	int n;
	for (int i = 0; i < N; i++) {
		//0 < n <= 10,000
		cin >> n;
		nums[n]++;

		if (max < n)
			max = n;
	}

	// 결과 출력 //i<=n 으로 해도 되지만 max<=n 이므로 좀 더 빠른 속도를 위해 max사용
	for (int i = 0; i <= max; i++) {
		if (nums[i] != 0)
			for (int j = 0; j < nums[i]; ++j)
				cout << i << '\n';
	}

	return 0;
}