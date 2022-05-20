// 언어 : C++ , (성공/실패) : 2/1 , 메모리 : 2060 KB , 시간 : 0ms

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>  // memset

using namespace std;

int a[10001];

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = a[0];
    int s_p = 0, e_p = 0,count=0;
    // 시간복잡도 O(N)
    while (e_p < n) {
        if (sum == m) count++; // sum과 check가 같다면 길이 작은거 업데이트
        if (sum >= m) { // sum이 check보다 크거나 같다면
            sum -= a[s_p]; // 현재 arr[s_p]의 값을 빼주고
            s_p++; // s_p를 +1 해준다.
        }
        else { // sum이 check보다 작다면
            e_p++; // e_p를 +1 해주고
            sum += a[e_p]; // arr[e_p] 값을 더해준다.
        }
    }

    cout << count << '\n';

    return 0;
}