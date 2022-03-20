# 📚 01_백준 적응하기

안녕하세요. 오늘은 첫 시간인만큼 간단하게 C++언어 소개와 과제를 내드리고 끝낼 예정입니다.

## 😮‍💨 C++로 코테를 준비하는게 편한이유

코테 난이도 : Python < C++ < JAVA


### Python 장점

1. 초심자 입장에서는 쉽다, 
2. 제공하는 라이브러리가 많다. (다른 언어에서는 직접구현해야하는데 라이브러리로 있는 경우가 꽤 있음)
3. 문자열을 다루기 편하다. (문자열 문제풀때만 파이썬 쓰는 사람도 많음)

### Python 단점

1. 코딩테스트에서 Python을 지원하지 않는 회사가 있다. (요즘엔 대부분 지원하긴함.)
2. 어려운 문제로 갈수록 관리해줘야할게 좀 생긴다. (스택 메모리, 코드 최적화)
3. 코테와는 논외이지만, 백준에서 난이도가 올라갈수록 파이썬으로 못푸는 문제가 생긴다. ㅋㄷㅋㄷ

##

### C++ 장점

1. 속도가 빠르다. 메모리를 적게먹는다. (최고의 장점)
2. 라이브러리의 메소드명이 단일화 되어있다. ex) stack,queue,deque,vector 같은 자료구조에서 push,push_back,pop,pop_back 이런식으로 메소드명이 단일화 되어있어 헷갈리지 않는다.
3. 거의 대부분의 코딩테스트에서 사용할 수 있다.
4. 자료가 많다. 난이도가 올라갈수록 양질의 자료들이 많아진다.

### C++ 단점

1. 문자열을 다루기 조금 어렵다. (특히 한글)

##

### JAVA 장점

1. 그만 알아보자.

### JAVA 단점

1. 코테에서 IDE를 지원하지 않는 경우가 많은데, 그런 환경에서 Java로 코테를 보게된다면,,, import 할것도 많고, 클래스도 많아서 많이 빡쎄다.
2. 가장 짜증나는게 메소드명이 단일화 되어있지 않다. 예를 들어 어떤 클래스는 poll로 값을 제거하고, 비슷한 다른 클래스는 remove로 제거하고, 다 제각각이라 IDE없으면 정말 힘들다.
3. 메모리, 속도 많이 잡아먹는다.

<br/><br/>

## 🤔 C++

C++ 언어는 도대체 뭘까요?

### C언어에서 라이브러리 기능이 확장되고, 클래스 기능이 추가된 버전

기존 문법도 다르지 않고 몇가지 편리한 기능만 추가 되었다.

ex) C언어 : printf , C++ : cout

C언어 : scanf , C++ : cin

C언어 : char a[20]; , C++ : string a;

```c
#include <stdio.h>

int main(void){
  // 입출력 최적화
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int a,b;
  
  scanf("%d %d",&a,&b);
  printf("%d\n",a+b);

  return 0;
}
```

```c++
#include <iostream>

using namespace std; // std::를 생략한다. 이 문장이 없으면 std::cin, std::cout 이렇게 다 입력해야한다.

int main(void){
  int a,b;
  
  cin>>a>>b; // a,b에 입력을 받는다. (띄어쓰기로 구분)
  cout<<a+b<<'\n'; // a+b의 값을 출력한다.

  return 0;
}
```

<br/><br/>

## 📘 C++로 알고리즘을 하면서 자주 사용하는 라이브러리

```c++
#include <vector> : 벡터는 진짜 제일제일 많이 사용합니다. 동적인 배열을 구현할때 많이 사용합니다. (진짜 좋아요 이거)
#include <queue> : 자료구조 큐! 우선순위 큐도 들어있다.
#include <string.h> : memset, fill 같은 메모리 초기화하는 함수를 쓸 때 자주 사용한다.
#include <unordered_map> : 해쉬를 사용할때 사용한다.
#include <algorithm> : 유용한 알고리즘이 들어있다. ex) sort, binary_search, upper_bound, unique, ...
```

## 📁 이번주 과제

### 🔗 링크 : [백준 단계별학습](https://www.acmicpc.net/step)
<img width="1142" alt="스크린샷 2022-03-16 오후 3 18 02" src="https://user-images.githubusercontent.com/79779676/159172600-476f3004-ae77-419c-b0d6-fe1b62843c53.png">

저기 문제를 전부다 푸시면 됩니다. 😁
