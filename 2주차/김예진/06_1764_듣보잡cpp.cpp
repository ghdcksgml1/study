#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char temp[1][20];//�Է¹��� ���ڿ�(�̸�)
	vector<string> listen;
	vector<string> who;

	int N;
	int M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {//�赵 ����
		cin >> temp[0];//���ڿ��� �Է���!!//temp[0]
		listen.push_back(temp[0]);//���ڿ� ���Ϳ� �߰�!!
	}
	for (int i = 0; i < M; i++) {//���� ����
		//�赵, ������ ���� ���Ϳ� �־��ִ� �ͺ���
		//�赵, ������ �� ���Ϳ� listen�� �־� �������༭ ���� �� ã�°� �� ����
		//�ð����⵵ ���
		cin >> temp[0];
		listen.push_back(temp[0]);
	}

	//����
	sort(listen.begin(), listen.end());

	for (int i = 0; i < M + N; i++) {
		if (listen[i] == listen[i + 1]) {//���� �ͳ����� �پ� �����Ƿ�
			who.push_back(listen[i]);//�赵���� ���� ���ڿ� ���Ϳ� �߰�
			i++;      //0, 1��°�� ������ �ٷ� 2��°�� �Ѿ����
		}
	}

	cout << who.size() << endl;

	for (int i = 0; i < who.size(); i++) {
		cout << who.at(i) << endl; 
		//���� �� ���//at ����Լ�//����.at(�ε���)
		//who.at(i) ��� who[i]�� ����
	}

	return 0;
}


