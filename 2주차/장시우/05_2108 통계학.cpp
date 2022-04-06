#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int arr[8001];

using namespace std;

int main()
{
	int x;
	cin >> x;
	int sum = 0;
	int index = 0;
	int max = 0;
	vector<int> list;
	for (int i = 0; i < x; i++)
	{
		int num;
		cin >> num;
		sum += num;
		if (num <= 0)
			index = -num;
		else
			index = 4000 + num;
		arr[index]++;
		if (arr[index] > max)
			max = arr[index];
		list.push_back(num);
	}

	float avg = sum / (float)x;
	cout << round(avg) << '\n';

	sort(list.begin(), list.end());
	cout << list[list.size() / 2] << '\n';

	bool flag = false;
	int result = 0;
	for (int i = -4000; i < 4001; i++)
	{
		if (i <= 0)
			index = -i;
		else
			index = 4000 + i;
		if (arr[index] == max)
		{
			result = i;
			if (flag)
				break;
			flag = true;
		}
	}

	cout << result << '\n';

	cout << list[list.size() - 1] - list[0];
}
