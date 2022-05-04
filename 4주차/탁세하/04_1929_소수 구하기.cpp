// ��� : C++ , (����/����) : 1/1 , �޸� : 3892 KB , �ð� : 28ms

#include<iostream>
#include<vector>

using namespace std;

bool PN[1000001];

vector<int> PrimeNum(int m, int n) { // m�̻� n������ �Ҽ� �迭 ����
	vector<int> v;
	for (int i = 2; i <= n; i++) { // ����! i = m �� �ƴ϶� i = 2���� �ݺ��ǵ��� �ϱ�
		for (int j = 2; i * j <= n; j++) {
			if (PN[i * j] == true) continue;
			else PN[i * j] = true;
		}
	}
	for (int i = m; i <= n; i++) {
		if (PN[i] == false) v.push_back(i);
	}

	return v;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, N; cin >> M >> N;
	vector<int> vPrime = PrimeNum(M, N);
	for (int i = 0; i < vPrime.size(); i++) {
		cout << vPrime[i] << '\n';
	}
}