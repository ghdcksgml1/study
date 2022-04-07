// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int N; cin >> N;
	vector<int> vp, vSum;
	int p, pSum = 0, result = 0;

	for (int i = 0; i < N; i++) {
		cin >> p;
		vp.push_back(p);
	}
	sort(vp.begin(), vp.end());
	
	for (int i = 0; i < vp.size(); i++) {
		pSum += vp[i];
		vSum.push_back(pSum);
		result += vSum[i];
	}
	cout << result;
}