// 언어 : C++ , (성공/실패) : 3/1 , 메모리 : 2292 KB , 시간 : 76ms

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int point[100001], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> point[i];

    sort(point, point + n);

    for (int i = 0; i < m; i++)
    {
        int st = 0, en = n - 1, count = 0, underIndex = 0, overIndex = 0;
        int a, b;
        cin >> a >> b;

        while (st <= en)
        {
            int mid = (st + en) / 2;

            if (point[mid] < a)
                st = mid + 1;
            else
                en = mid - 1;
        }

        underIndex = st;
        st = 0, en = n - 1;

        while (st <= en)
        {
            int mid = (st + en) / 2;

            if (point[mid] > b)
                en = mid - 1;
            else
                st = mid + 1;
        }
        overIndex = en + 1;

        count = overIndex - underIndex;
        cout << count << "\n";
    }
    return 0;
}