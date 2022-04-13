// ��� : C++ , (����/����) : 1/0 , �޸� : 2156 KB , �ð� : 0ms

#include<iostream>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;

	deque<int> circle; // ǳ�� ��ȣ
	deque<int> circleNums; // ǳ�� �� ������ ��ȣ
	for (int i = 0; i < N; i++) {
		int numTmp; cin >> numTmp;
		circle.push_back(i + 1); // ǳ�� ��ȣ �ο�
		circleNums.push_back(numTmp); // ǳ�� �� ���� ��ȣ �ο�
	}
	
	int circleNum = circleNums[circle.front() - 1]; // 1�� ǳ�� �� ���� ��ȣ
	cout << circle.front() << ' '; // 1�� ǳ�� ��Ʈ����
	circle.pop_front();
	while (circle.size() != 0) { // 1�� ������ ǳ�� ��Ʈ����
		if (circleNum > 0) {
			for (int j = 0; j < circleNum - 1; j++) {
				circle.push_back(circle.front());
				circle.pop_front();
			}
			cout << circle.front() << ' '; // ǳ�� ��ȣ ���
			circleNum = circleNums[circle.front() - 1];
			circle.pop_front();
		}
		else {
			for (int j = 0; j < -circleNum - 1; j++) {
				circle.push_front(circle.back());
				circle.pop_back();
			}
			cout << circle.back() << ' '; // ǳ�� ��ȣ ���
			circleNum = circleNums[circle.back() - 1];
			circle.pop_back();
		}
	}
}