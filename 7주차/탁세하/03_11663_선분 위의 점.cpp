// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2916 KB , 시간 : 76ms

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nums; // 점의 좌표

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		nums.push_back(tmp);
	}

	for (int i = 0; i < M; i++) {
		int lineSt, lineEn; // 선분 시작과 끝 좌표
		cin >> lineSt >> lineEn;

		int st = 0; int en = N - 1; int mid = 0;
		int result_st = 0; int result_en = 0;
		while (st < en) {
			mid = (st + en) / 2;
			if (lineSt <= nums[mid]) en = mid;
			else st = mid + 1;
		}
		result_st = st;
		

		st = 0; en = N - 1; mid = 0;
		while (st < en) {
			mid = (st + en + 1) / 2;
			if (lineEn < nums[mid]) en = mid - 1;
			else st = mid;
		}
		result_en = st;

		if (lineSt > nums[N - 1] || lineEn < nums[0]) cout << 0 << '\n';
		else cout << result_en - result_st + 1 << '\n';
	}

	return 0;
}