// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int input;
	int sum = 0;
	int N;
	cin >> N; //사람 수

	vector<int> p;
	for (int i = 0; i < N; i++) {
		cin >> input;
		p.push_back(input);
	}

	sort(p.begin(), p.end()); //오름차순 정렬

	for (int i = 0; i < N; i++) { //시간의 합을 계산할 때 index i번째 원소는 (N-i)번 나온다
		sum+= p[i] * (N-i);
	}

	cout << sum;
	return 0;
}


