#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    //��������
	reverse(s.begin(), s.end()); 

    cout << s;
}

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	std::string s; std::cin >> s;
	//���ڿ� ����
	std::vector<char> v;

	//���ڸ� ���Ϳ� ���� ����//�ϳ���
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s[i]);
	}

	//greater<>()//�������� ����//�񱳸� �����ϱ� ���� �Լ� ��ü
	std::sort(v.begin(), v.end(), std::greater<>());

	for (int i = 0; i < s.length(); i++) {
		std::cout << v[i];
	}
	std::cout << "\n";

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;  
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);
	reverse(arr + N, arr);


	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}
*/
//�ȵǴ� ����
//�迭�� ���� �ʴ� ������ ��ŭ ũ�� �Ҵ����� �𸣰� �޸� ���� ������