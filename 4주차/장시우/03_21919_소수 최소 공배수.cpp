// 언어 : C++, (성공 / 실패) : 1 / 4, 메모리 : 3136kb, 시간 : 8ms

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool PN[1000001];
vector<int> v;

void PrintNum() {
    //답이 2^63 미만인 입력만 주어진다. 라는 조건 때문에 long long을 쓴다
    for (long long i = 2; i <= 1000000; i++) {
        if (PN[i] == true) continue;
        for (long long j = 2; i * j <= 1000000; j++) {
            PN[i * j] = true;
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        v.push_back(t);
    }

    /*sort로 정렬하고 unique로 중복된 원소들을 맨 뒤로 옮긴다.
     옮긴 부분을 erase로 삭제해주면 된다.*/
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    PrintNum();

    PN[0] = true; PN[1] = true;

    long long lcm = 1;

    for (int i = 0; i < v.size(); i++) {
        if (PN[v[i]] == false && v[i] != 0) {
            lcm *= v[i];
        }
    }
    if (lcm == 1)
        cout << -1 << '\n';
    else
        cout << lcm << '\n';


    return 0;

}