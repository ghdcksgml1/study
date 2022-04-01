/*02_0751_�� �����ϱ�1*/
/*merge sort: �Լ��� ȣ��� ������ ���ݾ� �߶� ��������� �Լ� ȣ��
�� ���ʿ� ���� ���� �������� 2���� �����ؼ� ���ĵ� �迭�� merge �� ������ ���*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[1000000];
int b[1000000];//merge sort�� �ӽ�������� �ʿ�

void merge(int start, int end) {
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = 0;

	//���ʰ� ������ ������ ���ĵ� ���·� �迭 b�� ����
	while (i <= mid && j <= end) {
		if (a[i] <= a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];

	}
	//���� ���տ� �Ű����� ���� �� �������� �� b�� �ű�
	while (i <= mid) {
		b[k++] = a[i++];
	}
	//������ ���տ� �Ű����� ���� �� ���� �� b�� �ű�
	while (j <= end) {
		b[k++] = a[j++];
	}
	//���ĵ� ���� ������ �迭 b�� ���� a�� �ű�
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






/*�׳� sort ���-vector
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