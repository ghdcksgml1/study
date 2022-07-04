// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 5540 KB , 시간 : 52ms

#include <iostream>

using namespace std;

int n, m;
int power[100000];
string title[100000];

int binSearch(int p) {
    int mid = 0, st = 0, en = n - 1;
    while (st <= en) {
        mid = (st + en) / 2;
        if (power[mid] >= p) {
            en = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    if (p > power[mid])
        return mid + 1;
    else
        return mid;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> title[i] >> power[i];
    int p;
    for (int i = 0; i < m; i++) {
        cin >> p;
        cout << title[binSearch(p)] << "\n";
    }
    return 0;
}
