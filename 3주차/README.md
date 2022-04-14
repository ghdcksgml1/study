# 📚 03_Data Structure (자료구조)

<br/>

오늘 배울 자료구조는 **vector, stack, queue, deque** 입니다.

<br/>

## ⚽️ Vector (벡터)

<br/>

<img width="556" alt="스크린샷 2022-04-06 오후 2 34 03" src="https://user-images.githubusercontent.com/79779676/161902524-991abb42-ef93-49ac-9385-33bf0203a140.png">

```c++
vector<int> v; // 1, 5, 2, 4, 10, 5
```

- v.front() = vector의 맨 앞 원소;  // v.front() = 1 
- v.begin() = vector의 맨 앞 주소;  // v.begin() = v의 시작주소
- v.size() = vector의 원소 개수;  // v.size() = 6 v의 개수
- v.back() = vector의 맨 뒤 원소;  // v.back() = 5 
- v.end() = vector의 맨 뒤 주소;  // v.end() = v의 끝 주소
- v.push_back() = vector의 맨 뒤; // v.push_back(3) => 1, 5, 2, 4, 10, 5, 3
- cout<<v[2]; // 2 출력, 기존 배열처럼 인덱스에 접근하여 사용할 수 있다.

<br/><br/>

## 🏀 Stack (스택)

<br/>

스택은 Last In First Out (LIFO) 구조로 가장 최근에 들어간 객체가 가장 먼저 나오는 자료구조이다.

<img width="717" alt="스크린샷 2022-04-06 오후 2 55 39" src="https://user-images.githubusercontent.com/79779676/161904854-9b859fe0-dbb7-45e5-926e-e64820e4327e.png">

```c++
stack<int> st; // stack 변수 선언
```
- st.empty() : 스택이 비어있으면 true, 비어있지 않으면 false를 리턴한다. ex) true
- st.push(값) : 스택에 값을 집어 넣는다. ex) st.push(1); st.push(2); st.push(3);
- st.pop() : 최상단 스택에 값을 뺀다. ex) st.pop();
- st.top() : 스택의 맨 윗값을 가져온다. ex) st.top(); => 2

<br/><br/>

## 🏈 Queue (큐)

<br/>

큐는 First In First Out (FIFO) 구조로 가장 먼저 들어간 객체가 가장 먼저 나오는 구조입니다.

<img width="765" alt="스크린샷 2022-04-06 오후 3 09 42" src="https://user-images.githubusercontent.com/79779676/162166858-e6a784bf-1cdb-4381-b94e-fcafd2653cc3.png">

```c++
queue<int> q; // queue 선언
```

- q.empty() : 큐가 비어있으면 true, 비어있지 않으면 false를 리턴한다.
- q.push(값) : 큐에 값을 집어넣는다.
- q.pop() : 가장 앞에 있는 큐의 값을 뺀다.
- q.front() : 큐의 가장 앞의 값을 가져온다.

<br/><br/>

## 🥎 Deque (덱)

<br/>

덱의 구조는 큐와 비슷하게 생겼지만, 큐와의 차별점은 값을 앞에서 넣을 수도 뺄수도 있고, 값을 뒤에서 넣을 수도 뺄수도 있습니다.

<img width="486" alt="Screen Shot 2021-10-01 at 5 10 45 PM" src="https://user-images.githubusercontent.com/79779676/135587439-846c65b1-83d7-4032-aef7-bb13223666f1.png">

```c++
deque<int> dq; // deque 선언
```

- dq.empty() : 덱이 비어있으면 true, 비어있지 않으면 false를 리턴한다.
- dq.push_front(값) : 덱이 앞부분에 값을 넣어준다. 기존에 있던값들은 한칸씩 밀린다.
- dq.pop_front() : 덱의 앞부분의 값을 빼준다.
- dq.push_back(값) : 덱의 뒷부분에 값을 넣어준다.
- dq.pop_back() : 덱의 뒷부분의 값을 빼준다.
- dq[2]; // 벡터와 마찬가지로 인덱스로 값에 접근할 수 있다.

<br/><br/>

---

**강의 추천 (스택) :** https://www.youtube.com/watch?v=0DsyCXIN7Wg

**강의 추천 (큐) :** https://www.youtube.com/watch?v=D_fwSy5tRAY

**강의 추천 (덱) :** https://www.youtube.com/watch?v=0mEzJ4S1d8o

<br/><br/>

<table>
  <tr>
    <td align="center">순서</td>
    <td align="center">추천 문제</td>
    <td align="center">난이도</td>
    <td align="center">문제 번호</td>
    <td align="center">문제 이름</td>
    <td align="center">문제 링크</td>
  </tr>
  <tr>
    <td align="center">01</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">10828</td>
    <td align="center">스택</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10828">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">9012</td>
    <td align="center">괄호</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/9012">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1158</td>
    <td align="center">요세푸스 문제</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1158">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">10845</td>
    <td align="center">큐</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10845">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">18258</td>
    <td align="center">큐2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/18258">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">10866</td>
    <td align="center">덱</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10866">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">2346</td>
    <td align="center">풍선 터뜨리기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2346">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">14891</td>
    <td align="center">톱니바퀴</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/14891">바로가기</a></td>
  </tr>
</table>

- 8번 문제 정답풀이입니다. **(특별한 알고리즘 없이 구현력이 요구되는 문제입니다.)**

**링크: https://blog.naver.com/ghdcksgml2/222401090306**

<br/><br/>
