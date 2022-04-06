  // 언어 : C++ , (성공/실패) : 2/2 , 메모리 : 5224 KB , 시간 : 76ms

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> arr;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, tmp, range, middle = 0, most_val, sum = 0;
    int most = -9999;
    int number[8001] = { 0, };

    bool not_first = false;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
        sum += tmp;
        number[tmp + 4000]++;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 8001; i++)
    {
        if (number[i] == 0)
            continue;
        if (number[i] == most)
        {
            if (not_first)
            {
                most_val = i - 4000;
                not_first = false;
            }
        }
        if (number[i] > most)
        {
            most = number[i];
            most_val = i - 4000;
            not_first = true;
        }
    }
    middle = arr[arr.size() / 2];
    sum = round((float)sum / n);
    range = arr.back() - arr.front();
    cout << sum << '\n' << middle << '\n' << most_val << '\n' << range;
}
