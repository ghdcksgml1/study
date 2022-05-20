// 언어 : C++ , (성공/실패) : 1/2 , 메모리 : 3192 KB , 시간 : 20ms

#include <iostream>

using namespace std;

int a[200001];
int count1[100001];

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,k; cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int s_p = 0, e_p = 0, Max_length=0;
    // 시간복잡도 O(N)
    count1[a[0]]++;
    while (e_p < n) {

        

        if (count1[a[e_p]] > k) {
            count1[a[s_p]] -= 1;
            s_p++;
        }
        else { 
            Max_length = max(Max_length, e_p - s_p+1);
            e_p++;
            count1[a[e_p]] += 1;
        }

    }


    cout << Max_length << '\n';

    return 0;
}