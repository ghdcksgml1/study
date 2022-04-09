
//받은 문자열에서 하나하나 문자를 비교할 때 
//s.substr() 사용했는데 그냥 s[인덱스] 사용하면 됨

#include <iostream>
#include <algorithm>
#include <stack>//!!!
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int flag;

	while (N > 0) {//!!!
		string s;
		stack <char> st;//!!!스택활용
		cin >> s;
		flag = 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				st.push(s[i]);
			}
			else if (s[i] == ')') {
				if (!st.empty()) st.pop();//스택에 (있으면 없애주기 
				else flag = 0;//(가 없으면 짝이 안되므로 flag 0으로 만들기
			}
		}
		if (flag == 1 && st.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
		N--;
	}
	return 0;
}

//코드 참조
/*
* 참조했는데 안된당//출력초과?
#include <iostream>
#include <string> 

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int a = 0, b = 0, count = 0;//한번에 선언 가능
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		a = 0, b = 0, count = 0;//문자열 입력 받을 때 매번 초기화

		for (int j = 0; j < s.length(); j++) {
			//!!!
			//count 변수를 (이 나오면 +1, )이 나오면 -1해서
			//)이 (보다 많은지 확인 
			if (s[j] == '(') count += 1, a += 1;
			else if (s[j] == ')') count -= 1, b += 1;

			if (count < 0) {
				//(가 없는데 )이 먼저 나옴//바로 NO
				cout << "NO\n";
				break;
			}

			//(가 )보다 많이 나왔거나 (와 )이 짝이 맞을 
			if(count >= 0 && a==b) cout << "YES\n"; // (와 )의 개수가 같을 때
			else if (count >= 0 && a != b) cout << "NO\n"; // (이 )보다 많을 때
		}
	}
	return 0;
}
*/

//내코드
//바로 붙어 있는 두개가 ()면 없애주고 다 없어지면 YES 안 없어진 게 있으면 NO
//이러면 문자열이 남아있으면 NO고, 다 없어지면 YES인데
//질문 2개 코드 안되는 이유
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int a = 0, b = 0, count = 0;//한번에 선언 가능
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		//여기서 시간 많이 쓰이는지
		while (s.length() != 0 && s.find(")") != string::npos) {
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == '(') {
					if (s[j + 1] == ')') {
						s.erase(j, 2);
						j = 0;//이러면 무한 반복?
					}
				}
			}
		}
		if(s.length() == 0) cout << "YES\n";  //모두 사라짐
		else cout << "NO\n";  //(만 남음
	}

	return 0;
}
*/
