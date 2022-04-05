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
    //내림차순
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
	//문자열 생성
	std::vector<char> v;

	//문자를 벡터에 집어 넣음//하나씩
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s[i]);
	}

	//greater<>()//내림차순 정렬//비교를 수행하기 위한 함수 객체
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
//안되는 이유
//배열을 쓰지 않는 이유는 얼만큼 크기 할당할지 모르고 메모리 제한 때문에