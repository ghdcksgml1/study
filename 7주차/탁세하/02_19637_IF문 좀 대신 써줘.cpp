// ��� : C++ , (����/����) : 1/0 , �޸� : 10344 KB , �ð� : 56ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

vector<pair<string, int>> name; // name.first : Īȣ, name.second : ��谪
vector<int> v; // ��谪

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) { // name�� Īȣ�� ��谪 ����, v�� ��谪 ����
		string tmpS; int tmpN; cin >> tmpS >> tmpN;
		name.push_back(make_pair(tmpS, tmpN));
		v.push_back(name[i].second);
	}
	for (int i = 0; i < M; i++) {
		int tmp; cin >> tmp;
		cout << name[lower_bound(v.begin(), v.end(), tmp) - v.begin()].first << '\n';
	}
	return 0;
}