// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 6172 KB , 시간 : 32ms

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<string>notHeard, both;
    int N, M;
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> s;
        notHeard.push_back(s);
    }
    sort(notHeard.begin(), notHeard.end());

    for (int i = 0; i < M; i++) {
        cin >> s;
        if (binary_search(notHeard.begin(), notHeard.end(), s)) {
            both.push_back(s);
        }
    }
    sort(both.begin(), both.end());
    cout << both.size() << "\n";
    for (string o : both) {
        cout << o << "\n";
    }
}