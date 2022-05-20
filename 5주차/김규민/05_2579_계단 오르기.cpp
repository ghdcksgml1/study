// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2020 KB , 시간 : 0m

#include <iostream>
#include <vector>
using namespace std;

vector <int> points;
vector <int> memo;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N; //계단의 개수
	points.resize(N);
	memo.resize(N);
	int temp;

	for (int i = 0; i < N; i++) {	
		cin >> temp;
		points[i] = temp;
	}

	memo[0] = points[0];
	memo[1] = points[0] + points[1];
	memo[2] = max(points[0] + points[2], points[1] + points[2]);

	for (int i = 3; i < N; i++) {
		memo[i] = max(memo[i - 2] + points[i], memo[i-3] + points[i] + points[i-1]);
	}
	
	cout << memo[N-1];


	return 0;
}
