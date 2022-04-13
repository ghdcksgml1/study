// 언어 : C++, (성공 / 실패) : 1 / 1, 메모리 : 2152kb, 시간 : 60ms

#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	queue<int> circle;
	cin >> n >> k;
	cout << "<";
	for (int i = 0; i < n; i++)
		circle.push(i+1);
	while (circle.size() - 1) {
		for (int i = 0; i < k - 1; i++) {
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", ";
		circle.pop();
	}
	cout << circle.front() << ">";
}