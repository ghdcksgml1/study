// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2156 KB , 시간 : 0ms

#include<iostream>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;

	deque<int> circle; // 풍선 번호
	deque<int> circleNums; // 풍선 속 종이의 번호
	for (int i = 0; i < N; i++) {
		int numTmp; cin >> numTmp;
		circle.push_back(i + 1); // 풍선 번호 부여
		circleNums.push_back(numTmp); // 풍선 속 종이 번호 부여
	}
	
	int circleNum = circleNums[circle.front() - 1]; // 1번 풍선 속 종이 번호
	cout << circle.front() << ' '; // 1번 풍선 터트리기
	circle.pop_front();
	while (circle.size() != 0) { // 1번 이후의 풍선 터트리기
		if (circleNum > 0) {
			for (int j = 0; j < circleNum - 1; j++) {
				circle.push_back(circle.front());
				circle.pop_front();
			}
			cout << circle.front() << ' '; // 풍선 번호 출력
			circleNum = circleNums[circle.front() - 1];
			circle.pop_front();
		}
		else {
			for (int j = 0; j < -circleNum - 1; j++) {
				circle.push_front(circle.back());
				circle.pop_back();
			}
			cout << circle.back() << ' '; // 풍선 번호 출력
			circleNum = circleNums[circle.back() - 1];
			circle.pop_back();
		}
	}
}