//�ڵ� ����
//�޸� ���� ������ �Է¹��� ���� �迭�� �������� ����
//!!!�Է� ���� ������ �ε����� ���� ������ŭ ����������
//ex)2 3 3 �Է� ������ nums[2]=1, nums[3]=2
//�迭�� ó���� ũ�� 10001�� �̹� �������־��� ������ 
//��½� �ݺ������� max(�ִ밪)�����̰�,
//�Է� ���� �� �ִ밪�� ������
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//1 �� N �� 10,000,000
	int N;
	cin >> N;

	//N ���� ���� �Է�
	int nums[10001] = { 0 };
	int max = 0;
	int n;
	for (int i = 0; i < N; i++) {
		//0 < n <= 10,000
		cin >> n;
		nums[n]++;

		if (max < n)
			max = n;
	}

	// ��� ��� //i<=n ���� �ص� ������ max<=n �̹Ƿ� �� �� ���� �ӵ��� ���� max���
	for (int i = 0; i <= max; i++) {
		if (nums[i] != 0)
			for (int j = 0; j < nums[i]; ++j)
				cout << i << '\n';
	}

	return 0;
}