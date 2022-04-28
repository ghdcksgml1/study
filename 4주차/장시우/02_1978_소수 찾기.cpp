// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2020kb, 시간 : 0ms

#include <iostream>
#include <vector>

using namespace std;

bool PN[1001];

vector<int> v;

void PrintNum() {
	for (int i = 2; i <= 1000; i++) {
		if (PN[i] == true) continue;
		for (int j = 2; i * j <= 1000; j++) {
			PN[i * j] = true;
		}
	}

}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
	}

	PrintNum();

	int cnt = 0;
	PN[0] = true; PN[1] = true;

	for (int i = 0; i < v.size(); i++) {
		if (PN[ v[i] ] == false) cnt += 1;
	}

	cout << cnt<<'\n';


	return 0;

}