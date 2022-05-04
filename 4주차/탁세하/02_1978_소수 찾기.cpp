// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include<iostream>
#include<vector>

using namespace std;

bool pn[1001];

void PrimeNum() {
	pn[0] = true;
	pn[1] = true;
	for (int i = 2; i < 1000; i++) {
		if (pn[i] == true) {
			continue;
		}
		for (int j = 2; i * j <= 1000; j++) {
			pn[i * j] = true;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;

	vector<int> vNum;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		vNum.push_back(tmp);
	}
	int count = 0;
	PrimeNum();
	for (int i = 0; i < vNum.size(); i++) {
		if (pn[vNum[i]] == false) {
			count++;
		}
	}
	cout << count;
}