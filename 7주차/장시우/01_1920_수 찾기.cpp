// 언어 : C++ , (성공/실패) : 4/0 , 메모리 : 2412 KB , 시간 : 52ms

#include <iostream>
#include <algorithm>

using namespace std;

int A[100001];

int n, m;

void binarySearch(int key) {
    int st = 0;
    int en = n - 1;

    while (st <= en) {

        int mid = (st + en) / 2;

        if (A[mid] >= key) {
            if (A[mid] == key) {
                cout << 1 << '\n';
                return;
            } 
            en = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    cout << 0 << '\n';

    return;
}




int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A, A + n);

    cin >> m;

    int temp;

    for (int i = 0; i < m; i++) {
        cin >> temp;
        binarySearch(temp);
    }

    return 0;
}