/*02_0751_수 정렬하기1*/
/*merge sort: 함수가 호출될 때마다 절반씩 잘라서 재귀적으로 함수 호출
맨 왼쪽에 제일 작은 조각부터 2개씩 병합해서 정렬된 배열을 merge 해 나가는 방식*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[1000000];
int b[1000000];//merge sort는 임시저장공간 필요

void merge(int start, int end) {
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = 0;

	//왼쪽과 오른쪽 집합을 정렬된 상태로 배열 b에 저장
	while (i <= mid && j <= end) {
		if (a[i] <= a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];

	}
	//왼쪽 집합에 옮겨지지 않은 게 남아있을 때 b에 옮김
	while (i <= mid) {
		b[k++] = a[i++];
	}
	//오른쪽 집합에 옮겨지지 않은 게 있을 때 b에 옮김
	while (j <= end) {
		b[k++] = a[j++];
	}
	//정렬된 것을 저장한 배열 b의 값을 a에 옮김
	for (int i = start; i <= end; i++) {
		a[i] = b[i - start];
	}
}

void sort(int start, int end)
    {
		if (start == end)
			return;
		int mid = (start + end) / 2;

		sort(start, mid);
		sort(mid + 1, end);
		merge(start, end);
	}

	int main() {
		ios::sync_with_stdio(0);
		cin.tie(0); cout.tie(0);

		int N;  cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> a[i];
		}

		sort(0, N - 1);

		for (int i = 0; i < N; i++) {
			cout << a[i] << "\n";
		}

		return 0;
	}






/*그냥 sort 사용-vector
vector<int> v(1000000);
 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;  cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.begin() + N, less());

	for (auto i = 0; i < N; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}
*/