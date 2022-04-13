// ��� : C++ , (����/����) : 1/0 , �޸� : 2024 KB , �ð� : 0ms

#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	queue<int> q;
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		string stmp; cin >> stmp; // �Է� ��ɾ�

		if (stmp.compare("push") == 0) {
			int X; cin >> X; // �Է� ������
			q.push(X);
		}
		if (stmp.compare("pop") == 0) {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		if (stmp.compare("size") == 0) {
			cout << q.size() << '\n';
		}
		if (stmp.compare("empty") == 0) {
			cout << q.empty() << '\n';
		}
		if (stmp.compare("front") == 0) {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		if (stmp.compare("back") == 0) {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
}