#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	//�迭 ���� ����
	int* arr = new int[N];

	int M;
	cin >> M;

	int L;
	for (int i = 0; i < N; i++) {
		cin >> L;
		arr[i] = L;
	}

	int sum = arr[0], check = M, count = 0;
	int s_p = 0, e_p = 0;
	while (e_p < N) {
		if (sum == check) {
			count++;
		}
		//sum�� check���� ������ e_p�� ������Ű��,
		//sum�� check���� ũ�� s_p�� ������Ų��. 
		if (sum < check) {
			//e_p�� ������Ų ������ �� ���� �����ְ� 
			e_p++;
			sum += arr[e_p];
		}
		else {
			//sum�� check���� ũ�ų� ������ �� ���� ���ְ�, s_p�� ������Ų��.
			sum -= arr[s_p];
			s_p++;
		}
	}
	//�����迭 ���� �ݳ� �����൵ ��
	delete arr;

	cout << count;

	return 0;
}