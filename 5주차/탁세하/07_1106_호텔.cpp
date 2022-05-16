// ��� : C++ , (����/����) : 1/0 , �޸� : 2024 KB , �ð� : 0ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

pair<int, int> arr[20]; // arr.first : �� ���� ȫ�� ���. arr.second : ��� �� Ȯ�� ��

int memo[1200]; // �ּ� ���ڱ�

int main(void) {
    // ����� �ӵ� ����ȭ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int C, N; cin >> C >> N;
    memset(memo, -1, sizeof(memo)); // memo ��� -1�� �ʱ�ȭ

    for (int i = 0; i < N; i++) {
        int a, b; cin >> a >> b;
        if (memo[b] == -1) {
            memo[b] = a;
        }
        else {
            memo[b] = min(memo[b], a);
        }
        arr[i] = { a,b };
    }

    memo[0] = 0;
    for (int i = 0; i <= C; i++) {
        if (memo[i] == -1) continue;
        for (int j = 0; j < N; j++) {
            memo[i + arr[j].second] = (memo[i + arr[j].second] == -1) ? memo[i] + arr[j].first : min(memo[i + arr[j].second], memo[i] + arr[j].first);
        }
    }

    int mn = 10000000000;
    for (int i = C; i <= C + 100; i++) {
        if (memo[i] != -1) mn = min(mn, memo[i]);
    }

    cout << mn << '\n';

    return 0;
}