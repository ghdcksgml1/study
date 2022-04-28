// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2156 KB , 시간 : 64ms

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	deque<pair<int, int>> Deque1;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		Deque1.emplace_back(i + 1, temp); 
	}

	while (!Deque1.empty()) {
		pair<int, int> element = Deque1.front();
		cout << element.first << " ";

		Deque1.pop_front(); //맨 앞으로 오는 원소 꺼냄
		if (Deque1.empty()) break; //꺼내고 비면 break

		if (element.second > 0) {
			for (int i = 0; i < element.second - 1; i++) { //횟수는 1 감소 (pop 수행)
				Deque1.push_back(Deque1.front()); //맨 앞 원소를 맨 뒤에 넣음
				Deque1.pop_front();
			}
		}
		
		else{
			for (int i = 0; i < -element.second; i++) {
				Deque1.push_front(Deque1.back()); //맨 뒤 원소를 맨 앞에 넣음
				Deque1.pop_back();
			}
		}

	}


	return 0;
}


