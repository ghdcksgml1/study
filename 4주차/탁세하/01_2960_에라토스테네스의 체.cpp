// ��� : C++ , (����/����) : 1/1 , �޸� : 2020 KB , �ð� : 0ms

#include<iostream>
#include<vector>

using namespace std;

bool PN[1001];
vector<int> v;

void CompositionNum(int n) { // n ������ �ռ��� ���ϱ�
    for (int i = 2; i <= n; i++) {
        for (int j = 1; i * j <= n; j++) {
            if (PN[i * j] == false) {
                v.push_back(i * j);
                PN[i * j] = true;
            }
            else continue;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	cin >> N >> K;

    CompositionNum(N);
    cout << v[K - 1];
}