// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2024kb, 시간 : 0ms

#include <iostream>

using namespace std;

int s[305];
int n;
int d[305][3];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i];

	if (n == 1) {
		cout << s[1];
		return 0;
	} 
	/*계단이 1개일 경우에 밑의 초기값들에 접근하는것이 좋지 않기 때문에 
	바로 s[1] 출력하고 종료해준다*/

	d[1][1] = s[1];
	d[1][2] = 0;
	d[2][1] = s[2];
	d[2][2] = s[1] + s[2];

	/*d[i][j] j개의 계단을 연속해서 밟고 i번째 계단까지 올라섰을 때 
	점수 합의 최댓값, i번쨰 계단 반드시 밟아야함*/

	for (int i = 3; i <= n; i++) {
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
		/* d[i][1]은 i - 1번째 계단을 밟지 않았고, i - 2번째 계단을 밟았음
		 s[i]는 i번째 계단에 쓰여있는 정수를 의미함 */

		d[i][2] = d[i - 1][1] + s[i];
		/* d[i][2]는 i-1번째 계단을 밟았고, 
		이때는 연속해서 계단을 밟은 상태이여함 */

	}
	cout << max(d[n][1], d[n][2]);
	//마지막 도착계단은 반드시 밟아야함
 
	return 0;
}