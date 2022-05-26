// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 2416 KB , 시간 : 12ms
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector <int> arr;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    cin >> n;
    arr.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    cin >> x;

    sort(arr.begin(), arr.end());

    int sp = 0;
    int ep = n-1;
    int count = 0;
    int sum = 0;
    while (sp < ep) {
        sum = arr[sp] + arr[ep];
        if (sum == x) count++;
        if (sum <= x) sp++;
        else ep--;
    }

    cout << count;
    return 0;
}
