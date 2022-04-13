//코드 참조
//deque에서 pair<int, int>사용!!
//터진 풍선은 덱에서 아예 삭제되므로 이동할 때 고려할 필요 없음
//정방향(종이 적힌 숫자 양수)과 역방향(숫자 음수)의 실행횟수가 다름!!!!!!!

#include <iostream>
#include <algorithm>
#include <deque>
#include <string> 

using namespace std;

//pair로 하면 first는 앞의 요소/second는 뒤의 요소를 가리킨다.
deque<pair<int, int>> deq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//풍선의 개수
	int N;
	cin >> N;

	//풍선에 적힌 종이의 숫자//두번째 요소
	int K;
	//풍선 안에 적힌 종이 숫자 입력
	for (int i = 1; i < N+1; i++) {
		cin >> K;
		deq.push_back({i, K});
	}

	while (!deq.empty()) {
		//처음에는 첫번째 풍선 터뜨리고
		//그 뒤부터 첫번째 풍선의 종이에 적힌 숫자만큼 이동해서 터뜨림

		//자료형 pair<int, int> 대신 !!auto!! now로 간편하게도 가능
		pair<int, int> now = deq.front(); // 첫번째 풍선을 now 변수에 할당
		cout << now.first << " "; // 풍선 번호(첫번째 요소) 출력
		deq.pop_front(); // 터뜨린 첫번째 풍선 덱에서 없앰

		//종이에 적힘 숫자 양수
		//첫번째에 있는 풍선을 맨 뒤에 넣어주고, 삭제시킴
		//그렇게 풍선 종이에 적힌 숫자에 해당하는 풍선이 맨 앞에 오도록 만듬
		if (now.second > 0) {
			//반복횟수가 하나 적은데
			//front_pop해서 터뜨리는 것 자체가 front를 바꿔주는 행위이기 때문!!!!!
			for (int i = 0; i < now.second - 1; i++) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		//종이에 적힌 숫자 음수
		//맨 뒤에 있던 풍선을 맨 앞에 넣어주고, 삭제시킴
		//마찬가지로 숫자가 음수여도 해당하는 풍선이 맨 앞에 오도록 만듬
		else
		{
			//종이 숫자 양수보다 반복횟수가 하나 많은데
			//back_pop해서 뒤에서 터뜨려도 해당하는 풍선을 front로 가져와야 되기 때문!!!!!
			for (int i = 0; i < -now.second; i++) {
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
	}
	
	return 0;
}