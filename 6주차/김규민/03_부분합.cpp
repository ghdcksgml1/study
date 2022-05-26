// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2412 KB , 시간 : 8ms
#include <iostream>
#include <math.h>

using namespace std;

int arr[100001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int sp = 0;
    int ep = 0;

    int sum = arr[0];
    int Min_Length = 100001;

    while (ep < N) {
       if (sum >= S) { 
            Min_Length = min(ep - sp + 1, Min_Length);
            sum -= arr[sp]; 
            sp++;
        }
        else { 
            ep++;
            sum += arr[ep]; 
        }
    }

    cout << (Min_Length == 100001 ? 0 : Min_Length) << '\n';

    return 0;
}
