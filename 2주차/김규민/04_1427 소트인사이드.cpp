// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2020 KB , 시간 : 0ms

#include <iostream>
#include <vector>
using namespace std;

vector<int> vector1(11);
//계수정렬

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; //수의 개수 (1 이상 1,000,000,000 이하) //int로 선언
	cin >> N;

	
	while (N) {
		vector1[N % 10] += 1;
		N /= 10;
	}

	for (int i = 10; i >= 0; i--) { //내림차순
		for (int j = 0; j < vector1[i]; j++) {
			cout << i;
		}
	}
	

	return 0;
}

/*
// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string N; //수의 개수 (1 이상 1,000,000,000 이하) //string으로 선언
	cin >> N;

	sort(N.begin(), N.end(), greater<char>()); //내림차순
	
	cout << N;
}
*/
