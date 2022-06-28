
// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2416 KB , 시간 : 72ms
using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

vector <int> points;

int left(int t1) {
	int target = t1;
	int st = 0;
	int en = points.size() - 1;

	while (st <= en) {
		int mid = (st + en) / 2;
		if (points[mid] < target) {
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}
	return en;
}

int right(int t1) {
	int st = 0;
	int en = points.size() - 1;

	int target = t1;
	while (st <= en) {
		int mid = (st + en) / 2;
		if (target < points[mid]) {
			en = mid - 1;
			
		}
		else {
			st = mid + 1;
		}
	}
	return st;
}

void find(int temp1, int temp2) {
	int num = right(temp2) - left(temp1) - 1;
	cout <<  num << "\n";
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; //점 N, 선분 M
	cin >> N >> M;

	//points.resize(N + 3);
	points.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> points[i];
	}
	sort(points.begin(), points.end());
	int temp1, temp2;

	for (int j = 0; j < M; j++) {
		cin >> temp1 >> temp2;
		find(temp1, temp2);
	}
	return 0;
}

