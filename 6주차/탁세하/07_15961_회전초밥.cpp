// ��� : C++ , (����/����) : 1/0 , �޸� : 13752 KB , �ð� : 264ms

#include<iostream>

using namespace std;

int arr[3000001]; // �ʹ� ����
int dish[3001]; // dish[i] : �ʹ� i�� ���� Ƚ��

int main(void) {
    // ����� �ӵ� ����ȭ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, d, k, c; cin >> N >> d >> k >> c;
    for (int i = 0; i < N; i++) { // �ʹ� ���� �迭�� ����
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < k; i++) { // �����ؼ� �ʹ� k�� ���
        if (dish[arr[i]] == 0) cnt++;
        dish[arr[i]]++;
    }
    int mx = dish[c] == 0 ? cnt + 1 : cnt; // ���� ��� ������ ���� mx ����
    for (int i = 0; i < N; i++) { // N���� �ʹ� ȸ����Ű�鼭 cnt ����
        dish[arr[i]]--;
        if (dish[arr[i]] == 0) cnt--;
        if (dish[arr[(i + k) % N]] == 0) cnt++;
        dish[arr[(i + k) % N]]++;
        mx = max(mx, dish[c] == 0 ? cnt + 1 : cnt);
    }

    cout << mx << '\n';

    return 0;
}