// 언어 : C++ , (성공/실패) : 1/2 , 메모리 : 2180 KB , 시간 : 1776s

#include <iostream>
#include <vector>
using namespace std;

vector<int> vector1(10001); //0부터 인덱스 시작 -> index를 10001로 설정해야 숫자 10000까지 들어갈 수 있음!!

//계수정렬 _시간복잡도 최상의 경우 O(n + max값)
//배열의 index를 data와 같도록 두고
//배열의 값을 data가 나온 횟수로 하여, 그 값만큼 배열의 인덱스를 읽어 

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N; //수의 개수 (1 이상 10,000,000 이하)
	cin >> N;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		vector1[n] += 1;
		//입력되는 값을 index로 하여 배열 값(숫자가 나오는 횟수) 증가
	}

	//특정 index에서의 배열 값만큼 해당 index를 읽어 출력

	for (int i = 1; i < 10001; i++) { 
		for (int j = 0; j < vector1[i]; j++){
			cout << i << "\n";
		}
	}

	return 0;
}
