//��ƴ�
//���� ���ڿ����� �ϳ��ϳ� ���ڸ� ���� �� 
//s.substr() ����ߴµ� �׳� s[�ε���] ����ϸ� ��

#include <iostream>
#include <algorithm>
#include <stack>//!!!
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int flag;

	while (N > 0) {//!!!
		string s;
		stack <char> st;//!!!����Ȱ��
		cin >> s;
		flag = 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				st.push(s[i]);
			}
			else if (s[i] == ')') {
				if (!st.empty()) st.pop();//���ÿ� (������ �����ֱ� 
				else flag = 0;//(�� ������ ¦�� �ȵǹǷ� flag 0���� �����
			}
		}
		if (flag == 1 && st.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
		N--;
	}
	return 0;
}

//�ڵ� ����
/*
* �����ߴµ� �ȵȴ�//����ʰ�?
#include <iostream>
#include <string> 

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int a = 0, b = 0, count = 0;//�ѹ��� ���� ����
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		a = 0, b = 0, count = 0;//���ڿ� �Է� ���� �� �Ź� �ʱ�ȭ

		for (int j = 0; j < s.length(); j++) {
			//!!!
			//count ������ (�� ������ +1, )�� ������ -1�ؼ�
			//)�� (���� ������ Ȯ�� 
			if (s[j] == '(') count += 1, a += 1;
			else if (s[j] == ')') count -= 1, b += 1;

			if (count < 0) {
				//(�� ���µ� )�� ���� ����//�ٷ� NO
				cout << "NO\n";
				break;
			}

			//(�� )���� ���� ���԰ų� (�� )�� ¦�� ���� ��
			if(count >= 0 && a==b) cout << "YES\n"; // (�� )�� ������ ���� ��
			else if (count >= 0 && a != b) cout << "NO\n"; // (�� )���� ���� ��
		}
	}
	return 0;
}
*/

//���ڵ�
//�ٷ� �پ� �ִ� �ΰ��� ()�� �����ְ� �� �������� YES �� ������ �� ������ NO
//�̷��� ���ڿ��� ���������� NO��, �� �������� YES�ε�
//���� 2�� �ڵ� �ȵǴ� ����
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int a = 0, b = 0, count = 0;//�ѹ��� ���� ����
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		//���⼭ �ð� ���� ���̴���
		while (s.length() != 0 && s.find(")") != string::npos) {
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == '(') {
					if (s[j + 1] == ')') {
						s.erase(j, 2);
						j = 0;//�̷��� ���� �ݺ�?
					}
				}
			}
		}
		if(s.length() == 0) cout << "YES\n";  //��� �����
		else cout << "NO\n";  //(�� ����
	}

	return 0;
}
*/