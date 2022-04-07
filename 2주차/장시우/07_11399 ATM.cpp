// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2020 KB , 시간 : 0ms

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    int sum=0,acc=0;

    for (int i = 0; i < n; i++) {
        acc += v[i];
        sum += acc;
    }
        

    cout << sum << "\n";

    return 0;


}
