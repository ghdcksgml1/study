// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms
#include <iostream>
#include <algorithm>
using namespace std;
//algorithm library의 sort함수 이용

int arr[1000]; //전역 변수는 힙 공간을 사용함(사용 가능한 메모리가 더 많음)

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N); // algorithm library의 변형 퀵 정렬, 항상 nlogn 보장

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}


/*
// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2156 KB , 시간 : 0ms
#include <iostream>
#include <set>
using namespace std;
//set 사용

set<int> nums;

int main(void) {
	ios::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);

	int N; //수의 개수 (1 이상 1000 이하)
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		nums.insert(a);
	}
	
	set<int>::iterator iter;
	for (iter = nums.begin(); iter != nums.end(); iter++) {
		cout << *iter << "\n";
	}

	return 0;
}
*/
