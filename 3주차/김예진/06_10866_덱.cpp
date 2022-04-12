#include <iostream>
#include <algorithm>
#include <deque>
#include <string> 

using namespace std;

//!!!���� ť�� ������ ���������, ���� �հ� �ڿ��� ��� �ְ�, �� �� ����
deque<int> deq;

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
		if (s == "push_front") {//�� �տ� �� �������//����(num) ����//��� ����
			cin >> num;
			deq.push_front(num);
		}
		if (s == "push_back") {//�� �ڿ� �� �������//����(num) ����//��� ����
			cin >> num;
			deq.push_back(num);

		}

		else if (s == "pop_front") {//�� ���� �� �ϳ� ����//���� �� ���//�� ������ -1 ���
			if (!deq.empty()) {//if(deq.empty())�ε� ����//���� ���� �ݴ��
				cout << deq.front() << "\n";//pop�� �� ����Ϸ���//deq.front()�ϰ� deq.pop_front()
				deq.pop_front();
			}
			else cout << -1 << "\n";
		}
		else if (s == "pop_back") {//�� ���� �� �ϳ� ����//���� �� ���//�� ������ -1 ���
			if (!deq.empty()) {//if(deq.empty())�ε� ����//���� ���� �ݴ��
				cout << deq.back() << "\n";//pop�� �� ����Ϸ���//deq.back()�ϰ� deq.pop_back()
				deq.pop_back();
			}
			else cout << -1 << "\n";
		}

		else if (s == "size") {//dequeue�� ������ ��ȯ
			cout << deq.size() << "\n";
		}

		else if (s == "empty") {//dequeue�� ��������� true(1), ������� ������ false(0) ��ȯ
			cout << deq.empty() << "\n";
		}

		else if (s == "front") {//dequeue�� �� ���� ���� ��ȯ��
			if (!deq.empty()) {
				cout << deq.front() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (s == "back") {//dequeue�� �� ���� ���� ��ȯ��
			if (!deq.empty()) {
				cout << deq.back() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}