//���� ��ü�� �� ���ذ� ���� ����
//�Է� 7 3
//��� <3, 6, 2, 7, 5, 1, 4>
//�̶�µ� ��¿��� �� 3 �ڿ� 6???

//�ڵ� ����
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

queue <int> que;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		que.push(i+1);//ť�� 1,2,3,4,...,N �־���
	}
	cout << "<";
	while (que.size()-1) {
		//(7, 3)�̸� 1~2�� ���� push, pop�ϰ�
		//3���� ����ϰ� pop���ֱ�
		for (int j = 0; j < K-1; j++) {
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	//ť que�� ���Ұ� 1���� ������ �� while(0) ���ǹ� ���߰� 
	//������ 1�� ���� ���
	cout << que.front() << ">";
	return 0;
}