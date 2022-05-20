// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms
#include <iostream>
#include <vector>
using namespace std;

int memo[31][31]; //0으로 모두 채워짐
vector <int> ret;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int caseNum;
	cin >> caseNum;
	int N, M; //N <= M; //0 < N <= M  < 30

	for (int i = 0; i <= 30; i++) {
		memo[i][0] = 1;
		memo[30][i] = 1;
		memo[i][i] = 1;
	}

	for (int k = 0; k < caseNum; k++) {
		cin >> N >> M;
		
		for (int i = 1; i <= M; i++) {
			for (int j = 1; j <= N; j++) {
				memo[i][j] = memo[i - 1][j - 1] + memo[i - 1][j];
			}
		}
		cout << memo[M][N] << "\n";
	}
	
	return 0;
}
	
