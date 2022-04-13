// ��� : C++ , (����/����) : 1/0 , �޸� : 2020 KB , �ð� : 56ms

#include<iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K; cin >> N >> K;
	queue<int> circle; // ���� ���� ť
	for (int i = 0; i < N; i++) { // ť�� ���� ����
		circle.push(i + 1);
	}
	cout << "<";
	while (circle.size() - 1) { 
		for (int i = 0; i < K - 1; i++) { // k��° �� �����ϱ� ���� �� ���� ���� pop
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", "; // k��° �� ��� �� pop
		circle.pop();
	}
	cout << circle.front() << ">";
}