// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 20260 KB , 시간 : 88ms
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string input;
	int N, M;
	cin >> N >> M;

	vector<string> vector1;
	vector<string> vector2;
	map<string, int> count;

	for (int i = 0; i < N + M; i++) { //vector1, vector2를 각각 다른 for문에서 다루면 시간이 오래 걸릴 것이라 생각해 하나의 for문으로 처리
		cin >> input;
		vector1.push_back(input);
		/*
    if (count(vector1.begin(), vector1.end(), input) == 2) { //원래는 이렇게 작성했는데, 시간초과가 나서 삭제 -> map이용
			vector2.push_back(input);
			}
		*/
		count[input]++;
		if (count[input] > 1) {
			vector2.push_back(input);
		}
		
	}

	cout << vector2.size() << "\n";
	sort(vector2.begin(), vector2.end());

	for (string i : vector2) {
		cout << i << "\n";
	}

	return 0;
}


