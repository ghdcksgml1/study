// ��� : C++ , (����/����) : 1/0 , �޸� : 2024 KB , �ð� : 4ms

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		stack<char> s; // ��ȣ ���ڿ� ���� ����
		string stmp; cin >> stmp; // ��ȣ ���ڿ�
		for (int i = 0; i < stmp.size(); i++) { // ���ڿ� ���̸�ŭ �ݺ�
			char ctmp; ctmp = stmp[i];
			if (ctmp == '(') { // '(' �ԷµǸ� ���ÿ� ����
				s.push(ctmp);
			}
			else { 
				if (s.empty()) { // ')' �Էµ��� �� ���� ��������� push�ؼ� ���� ä��� for�� ����������
					s.push(ctmp);
					break;
				}
				else { // ')' �Էµ��� �� ���� ä���� ������ '(' pop ��Ű��
					s.pop();
				}
			}
		}
		if (s.empty()) { // ���� ����� ������ vps
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
}
