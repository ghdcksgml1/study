// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2412 KB , 시간 : 8ms

#include <iostream>

using namespace std;

int N[100001];

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> N[i];
    }

    int c1 = 0, c2 = 0;

    int sum = N[0];
    int Min_Length = 100001;
    // 시간복잡도 O(N)
    while (c2 < n) {
        
        //if (sum == check) Min_Length = min(Min_Length, e_p - s_p + 1); // sum과 check가 같다면 길이 작은거 업데이트
        if (sum >= s) { // sum이 check보다 크거나 같다면
            Min_Length = min(c2 - c1+1, Min_Length);
            sum -= N[c1]; // 현재 arr[s_p]의 값을 빼주고
            c1++; // s_p를 +1 해준다.
        }
        else { // sum이 check보다 작다면
            c2++; // e_p를 +1 해주고
            sum += N[c2]; // arr[e_p] 값을 더해준다.
        }
    }

    cout << (Min_Length == 100001 ? 0 : Min_Length) << '\n';

    return 0;
}