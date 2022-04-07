#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int time[1000] = { 0 };
	int sum = 0; //변수 초기화 필수
	cin >> n;
	int a = n;

	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}

	sort(time, time+n);

	for (int i = 0; i < n; i++) {
		sum += time[i] * a--;
		//총 사람이 5명일 때 첫번째 사람의 인출 시간은 5번 더해지고,
		//두번째 사람은 4번, 세번째 사람은 3번, 네번째 사람은 2번, 5번째 사람은 1번 더해지므로
		//수행 후에 1씩 줄어드는 a--를 곱해서 총 시간 구함

		// 이 경우도 가능
		//////왜 안되는지
		//위에 int et = 0;//execution time//총 수행시간
		//sum += time[i];
		//et += sum;

		//안되는 경우와 이유
		//sum = sum + sum + time[i];
		//세번째 사람은 두번째 사람이 추가한 첫번째 사람의 인출시간까지 더하게 됨
		//각 사람의 수행시간은 전 사람의 수행시간에 자신의 수행시간을 더한 시간이지만
		//총 수행시간은 각 사람의 수행시간만 합해야 됨
	}

	cout << sum;

	return 0;
}

/*처음 짠 코드
* 굳이 벡터 사용할 필요 없어서 배열 사용
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	//int m;
	//vector<int> v;
	int sum;
	cin >> n;

	for (int i = 0; i < n; i++) {
		//cin >> m;
		//v.push_back(m);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		sum = sum + sum + v[i];
		///
	}

	cout << sum << endl;

	return 0;
}
*/

//질문
//// 이 경우 왜 안되는지
		//위에 int et = 0;//execution time//총 수행시간
		//sum += time[i];
		//et += sum;
