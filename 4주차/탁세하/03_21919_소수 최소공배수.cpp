// ��� : C++ , (����/����) : 1/8 , �޸� : 3132 KB , �ð� : 24ms

#include<iostream>
#include<vector>

using namespace std;

bool PN[1000001];

void PrimeNum() { // �ο� �迭 PN�� 0~1000000������ �ε��� �� �� �Ҽ��� �ε��� ��Ҹ� false
	PN[0] = true; PN[1] = true;
	for (int i = 2; i <= 1000000; i++) {
		for (int j = 2; i * j <= 1000000; j++) {
			if (PN[i * j] == true) continue;
			else PN[i * j] = true;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	vector<int> v, vPrime;
	for (int i = 0; i < N; i++) { // �Էµ� ���� ���� v�� ����
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	long long multiple = 1; // �ڷ��� ����! ���� 2�� 63���� �����̹Ƿ� int ����ϸ� �ȵȴ�!
	PrimeNum();
	for (int i = 0; i < N; i++) {
		if (PN[v[i]] == false) { // �Էµ� ������ ���� �Ҽ��̸� multiple�� ���ϰ�, vPrime�� �߰��Ѵ�.
			multiple *= v[i];
			PN[v[i]] = true; // �ߺ� ����!!!!!!!! �̷��� �ص� �ǳ�..?
			vPrime.push_back(v[i]);
		}
	}
	if (vPrime.size() == 0) multiple = -1; // vPrime�� ��Ұ� ������ multiple�� -1
	cout << multiple;
}