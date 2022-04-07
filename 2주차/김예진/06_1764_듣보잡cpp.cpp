#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char temp[1][20];//입력받은 문자열(이름)
	vector<string> listen;
	vector<string> who;

	int N;
	int M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {//듣도 못한
		cin >> temp[0];//문자열에 입력함!!//temp[0]
		listen.push_back(temp[0]);//문자열 벡터에 추가!!
	}
	for (int i = 0; i < M; i++) {//보도 못한
		//듣도, 보도를 따로 벡터에 넣어주는 것보다
		//듣도, 보도를 한 벡터에 listen에 넣어 정렬해줘서 같은 것 찾는게 더 빠름
		//시간복잡도 고려
		cin >> temp[0];
		listen.push_back(temp[0]);
	}

	//정렬
	sort(listen.begin(), listen.end());

	for (int i = 0; i < M + N; i++) {
		if (listen[i] == listen[i + 1]) {//같은 것끼리는 붙어 있으므로
			who.push_back(listen[i]);//듣도보도 못한 문자열 벡터에 추가
			i++;      //0, 1번째가 같으면 바로 2번째로 넘어가도록
		}
	}

	cout << who.size() << endl;

	for (int i = 0; i < who.size(); i++) {
		cout << who.at(i) << endl; 
		//벡터 값 출력//at 멤버함수//벡터.at(인덱스)
		//who.at(i) 대신 who[i]도 가능
	}

	return 0;
}


