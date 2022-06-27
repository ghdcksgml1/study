#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> power;
vector <string> title;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M; //칭호의 개수, 캐릭터들의 개수
	
	string temp1;
	int temp2;

	for (int i = 0; i < N; i++) { //길이 1 이상 11이하의 영어 대문자, 상한값
		cin >> temp1 >> temp2;
		title.push_back(temp1);
		power.push_back(temp2);
	}
	
	int strength;

	for (int i = 0; i < M; i++) {
		cin >> strength;//캐릭터의 전투력(칭호는 반드시 존재)
		cout << title[lower_bound(power.begin(), power.end(), strength) - power.begin()] << "\n";
	}

	return 0;
}
