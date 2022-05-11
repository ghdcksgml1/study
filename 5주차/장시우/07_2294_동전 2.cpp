// 언어 : C++, (성공 / 실패) : 1 / 0, 메모리 : 2412kb, 시간 : 0ms

#include <iostream>

#define MAX 110
using namespace std;

int N, K;
int Arr[MAX];
int DP[100010];

int Min(int A, int B) { if (A < B) return A; return B; }

void Input()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> Arr[i];
}

void Solution()
{
    for (int i = 1; i <= K; i++) DP[i] = 2e9;
    for (int i = 1; i <= N; i++) DP[Arr[i]] = 1;
    DP[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = Arr[i]; j <= K; j++)
        {
            DP[j] = Min(DP[j], DP[j - Arr[i]] + 1);
        }
    }

    if (DP[K] == 2e9) cout << -1 << '\n';
    else cout << DP[K] << '\n';
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}