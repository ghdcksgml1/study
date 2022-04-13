//�ڵ� ����
//deque���� pair<int, int>���!!
//���� ǳ���� ������ �ƿ� �����ǹǷ� �̵��� �� ����� �ʿ� ����
//������(���� ���� ���� ���)�� ������(���� ����)�� ����Ƚ���� �ٸ�!!!!!!!

#include <iostream>
#include <algorithm>
#include <deque>
#include <string> 

using namespace std;

//pair�� �ϸ� first�� ���� ���/second�� ���� ��Ҹ� ����Ų��.
deque<pair<int, int>> deq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//ǳ���� ����
	int N;
	cin >> N;

	//ǳ���� ���� ������ ����//�ι�° ���
	int K;
	//ǳ�� �ȿ� ���� ���� ���� �Է�
	for (int i = 1; i < N+1; i++) {
		cin >> K;
		deq.push_back({i, K});
	}

	while (!deq.empty()) {
		//ó������ ù��° ǳ�� �Ͷ߸���
		//�� �ں��� ù��° ǳ���� ���̿� ���� ���ڸ�ŭ �̵��ؼ� �Ͷ߸�

		//�ڷ��� pair<int, int> ��� !!auto!! now�� �����ϰԵ� ����
		pair<int, int> now = deq.front(); // ù��° ǳ���� now ������ �Ҵ�
		cout << now.first << " "; // ǳ�� ��ȣ(ù��° ���) ���
		deq.pop_front(); // �Ͷ߸� ù��° ǳ�� ������ ����

		//���̿� ���� ���� ���
		//ù��°�� �ִ� ǳ���� �� �ڿ� �־��ְ�, ������Ŵ
		//�׷��� ǳ�� ���̿� ���� ���ڿ� �ش��ϴ� ǳ���� �� �տ� ������ ����
		if (now.second > 0) {
			//�ݺ�Ƚ���� �ϳ� ������
			//front_pop�ؼ� �Ͷ߸��� �� ��ü�� front�� �ٲ��ִ� �����̱� ����!!!!!
			for (int i = 0; i < now.second - 1; i++) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		//���̿� ���� ���� ����
		//�� �ڿ� �ִ� ǳ���� �� �տ� �־��ְ�, ������Ŵ
		//���������� ���ڰ� �������� �ش��ϴ� ǳ���� �� �տ� ������ ����
		else
		{
			//���� ���� ������� �ݺ�Ƚ���� �ϳ� ������
			//back_pop�ؼ� �ڿ��� �Ͷ߷��� �ش��ϴ� ǳ���� front�� �����;� �Ǳ� ����!!!!!
			for (int i = 0; i < -now.second; i++) {
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
	}
	
	return 0;
}