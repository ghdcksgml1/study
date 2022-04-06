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

<br/><br/>

## 🏀 Stack (스택)

<br/>

스택은 First In First Out (FIFO) 구조로 가장 최근에 들어간 객체가 가장 먼저 나오는 자료구조이다.

<img width="717" alt="스크린샷 2022-04-06 오후 2 55 39" src="https://user-images.githubusercontent.com/79779676/161904854-9b859fe0-dbb7-45e5-926e-e64820e4327e.png">

```c++
stack<int> st; // stack 변수 선언
```
- st.empty() : 스택이 비어있으면 true, 비어있지 않으면 false를 리턴한다. ex) true
- st.push(값) : 스택에 값을 집어 넣는다. ex) st.push(1); st.push(2); st.push(3);
- st.pop() : 스택에 값을 뺀다. ex) st.pop();
- st.top() : 스택의 맨 윗값을 가져온다. ex) st.top(); => 2

<br/><br/>

## 🏈 Queue (큐)

<br/>



<br/><br/>

## 🥎 Deque (덱)

<br/>

<br/><br/>

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/5.svg"></td>
    <td align="center">2750</td>
    <td align="center">수 정렬하기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2750">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">2751</td>
    <td align="center">수 정렬하기 2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2751">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">10989</td>
    <td align="center">수 정렬하기 3</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10989">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1427</td>
    <td align="center">소트인사이드</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1427">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">2108</td>
    <td align="center">통계학</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2108">바로가기</a></td>
  </tr>
</table>

<br/><br/>
