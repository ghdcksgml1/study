#include <iostream>
#include <algorithm>
#include <stack>
#include <string> 
//���ڿ� ó�� �ʿ�//#include <cstring>���� strcmp�� �񱳵� ����

using namespace std;

stack<int> st;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string s;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> s;//��ġ �߿�!!!
		if (s == "push") {//�� ��(��)�� �� �������//��� ����
			cin >> num;
			st.push(num);
		}
		else if (s == "pop") {//�� ��(��)�� �� �ϳ� ��������//���� �� ���//�� ������ -1 ���
			if (!st.empty()) {//if(st.empty())�ε� ����!!
				cout << st.top() << "\n";//pop�� �� ����Ϸ���//st.top()�ϰ� st.pop()
				st.pop();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {//stack�� ������ ��ȯ//st.size()!!
			cout << st.size() << "\n";//endl���� "\n"�� �� ����
		}
		else if (s == "empty") {
			/*
			if (!st.empty()) {
				cout << 0;
			}
			else cout << 1;
			*/
			//���� stack ��ü�� ����.empty()�� ����
			//��������� true(1)//������� ������ false(0)�� ������!!!
			cout << st.empty() << "\n";
		}
		else if (s == "top") {//stack�� �� ��(��)�� ���� ��ȯ��
			if (!st.empty()) {
				cout << st.top() << "\n";
			}
			else cout << -1 << "\n";
		}
	}

	return 0;
}
