#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<string, int> um;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <string> v;
    for (int i = 0; i < n; i++) {
        string tmp = "";
        cin >> tmp;
        um[tmp] = 1;
    }
    for (int i = 0; i < m; i++) {
        string tmp = "";
        cin >> tmp;
        if (um[tmp] == 1) {
            v.push_back(tmp);
        }
    }
    cout << v.size()<<"\n";
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << "\n";
    }
    return 0;
}