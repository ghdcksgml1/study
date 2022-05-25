// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 9712 KB , 시간 : 524ms


#include <iostream>

using namespace std;

int main(void) {

    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n[1000001] = { 0 };
    int m[1000001] = { 0 };

    int n1, m1;
    cin >> n1 >>m1;

    for (int i = 0; i < n1; i++)
        cin >> n[i];

    for (int i = 0; i < m1; i++)
        cin >> m[i];

    int c1 = 0, c2 = 0;

    while (c1 + c2 < n1 + m1) {
        if (c1 == n1)
            cout << m[c2++] << " ";
        else if (c2 == m1)
            cout << n[c1++] << " ";
        else {
            if (n[c1] > m[c2])
                cout << m[c2++] << " ";
            else
                cout << n[c1++] << " ";
        }
    }

    return 0;
}