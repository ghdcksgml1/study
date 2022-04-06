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
	// 평균, 소수점 이하 첫째 자리 반올림
	float avg = sum / (float)x;
	cout << round(avg) << '\n';
	// 중앙값
	sort(list.begin(), list.end());
	cout << list[list.size() / 2] << '\n';
	// 최빈값
	//#1
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
	//#2
	//int curNum = 8000;
	//int curCount = 1;
	//int result = 0;
	//int minCount = 0;
	//int sameCount = 0;
	//for (int i = 0; i < list.size(); i++)
	//{
	// if (list[i] != curNum)
	// {
	// curNum = list[i];
	// curCount = 1;
	// }
	// else if (list[i] == curNum)
	// {
	// curCount++;
	// }
	// if (curCount > minCount)
	// {
	// minCount = curCount;
	// result = list[i];
	// sameCount = 0;
	// }
	// else if (curCount == minCount && sameCount < 1)
	// {
	// sameCount++;
	// result = list[i];
	// }
	//}
	cout << result << '\n';
	// 범위
	cout << list[list.size() - 1] - list[0];
}