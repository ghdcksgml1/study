#include <iostream>
#include <algorithm>
#include <queue>
#include <string> 

using namespace std;

queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {//�� �ڿ� �� �������//����(num) ����//��� ����
			cin >> num;
			q.push(num);
		}
		else if (s == "pop") {//�� ���� �� �ϳ� ����//���� �� ���//�� ������ -1 ���
			if (!q.empty()) {//if(q.empty())�ε� ����//���� ���� �ݴ��
				cout << q.front() << "\n";//pop�� �� ����Ϸ���//st.top()�ϰ� st.pop()
				q.pop();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {//queue�� ������ ��ȯ
			cout << q.size() << "\n";
		}
		else if (s == "empty") {//queue�� ��������� true(1), ������� ������ false(0) ��ȯ
			cout << q.empty() << "\n";
		}
		else if (s == "front") {//queue�� �� ���� ���� ��ȯ��
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (s == "back") {//queue�� �� ���� ���� ��ȯ��
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}
