// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 10228 KB , 시간 : 508ms
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int arr[100001];
vector <int> A;
vector <int> B;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;
    A.resize(N);
    B.resize(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    int sp = 0;
    int sp2 = 0;
    
    while (sp + sp2 <= N + M) {
        
        if (B[sp2] >= A[sp]) {
            cout << A[sp] << " ";
            sp++;
        }

        else {
            cout << B[sp2] << " ";
            sp2++;
        }

        if (sp == N) {
            for (int p = sp2; p < M; p++){
                cout << B[p] << " ";
            }
            break;
        }
        if (sp2 == M) {
            for (int p = sp; p < N; p++) {
                cout << A[p] << " ";
            }
            break;
        }
    }

    return 0;
}
