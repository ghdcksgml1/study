#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int time[1000] = { 0 };
	int sum = 0; //���� �ʱ�ȭ �ʼ�
	cin >> n;
	int a = n;

	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}

	sort(time, time+n);

	for (int i = 0; i < n; i++) {
		sum += time[i] * a--;
		//�� ����� 5���� �� ù��° ����� ���� �ð��� 5�� ��������,
		//�ι�° ����� 4��, ����° ����� 3��, �׹�° ����� 2��, 5��° ����� 1�� �������Ƿ�
		//���� �Ŀ� 1�� �پ��� a--�� ���ؼ� �� �ð� ����

		// �� ��쵵 ����
		//////�� �ȵǴ���
		//���� int et = 0;//execution time//�� ����ð�
		//sum += time[i];
		//et += sum;

		//�ȵǴ� ���� ����
		//sum = sum + sum + time[i];
		//����° ����� �ι�° ����� �߰��� ù��° ����� ����ð����� ���ϰ� ��
		//�� ����� ����ð��� �� ����� ����ð��� �ڽ��� ����ð��� ���� �ð�������
		//�� ����ð��� �� ����� ����ð��� ���ؾ� ��
	}

	cout << sum;

	return 0;
}

/*ó�� § �ڵ�
* ���� ���� ����� �ʿ� ��� �迭 ���
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	//int m;
	//vector<int> v;
	int sum;
	cin >> n;

	for (int i = 0; i < n; i++) {
		//cin >> m;
		//v.push_back(m);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		sum = sum + sum + v[i];
		///
	}

	cout << sum << endl;

	return 0;
}
*/

//����
//// �� ��� �� �ȵǴ���
		//���� int et = 0;//execution time//�� ����ð�
		//sum += time[i];
		//et += sum;
