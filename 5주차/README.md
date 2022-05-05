# 📚 05_Dynamic Programming 동적 프로그래밍

순서대로 푸는게 좋아요.

추천 문제는 (✅ 체크표시) 했습니다.

<br/>

## ✨ 개념

이번시간은 다이나믹 프로그래밍입니다. DP라도 많이 불리죠...

개념은 아주 간단하지만, 난이도의 스펙트럼이 워낙 넓어서... 저또한 잘 못하는 알고리즘 중 하나입니다.

동적 프로그래밍을 가장 설명하기 쉬운 예시가 바로 피보나치 수열입니다.

피보나치 수열은 아래와 같은 점화식을 가집니다.

F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub> (n ≥ 2)

동적 프로그래밍을 배우지 않았다면, 아래와 같이 재귀함수를 통해 피보나치 함수를 구현할겁니다.

```c++
int fibonacci(int x){
  if(x==0) return 0;
  if(x==1) return 1;
  return fibonacci(x-1) + fibonacci(x-2);
}
```

하지만, 이러한 식의 경우 X가 50정도만 넘어가도 엄청난 연산을 요하기 때문에

큰 피보나치 수를 구하기엔 어려움이 있습니다.

<br/><br/>

x=5일 경우의 함수 전개를 보면 아래의 그림과 같습니다.

<img width="575" alt="스크린샷 2022-05-04 오후 11 47 12" src="https://user-images.githubusercontent.com/79779676/166708583-09b705d4-b01c-4526-939f-0f3a02ddf0b8.png">
<br/>

아래 동그라미 친 부분을 보면 이미 계산한 값임에도 다시 함수를 들어가 계산을 하고있는

바보같은 모습을 보실 수 있습니다.

<img width="555" alt="스크린샷 2022-05-04 오후 11 58 18" src="https://user-images.githubusercontent.com/79779676/166709183-bad4be18-35da-47ec-837a-9ca2853eb222.png">

<br/><br/>

이를 방지하고자, 실행상태에서 이미 연산이 된 값은 가져다 쓰면 불필요한 함수의 반복을 줄일 수 있습니다.

<img width="553" alt="스크린샷 2022-05-05 오전 12 01 31" src="https://user-images.githubusercontent.com/79779676/166710626-ff9f3e0e-1e6f-4f8e-a6d5-3649ffc3a3a5.png">

<br/><br/>

이렇게 메모이제이션 (memoization) 방법 즉, 메모를하여 불필요한 계산을 줄이는 것을 동적 프로그래밍이라고 합니다.

아래와 같이 코드를 구현할 수 있습니다.

```c++
long long memo[1001];

long long fibonacci(int x){
  if(x==0) return 0;
  if(x==1) return 1;
  if(memo[x] != 0) return memo[x]; // 만약 memo[x]가 0이 아니면, 즉 메모가 되어있으면 memo[x] 값을 리턴한다.
  memo[x] = fibonacci(x-1) + fibonacci(x-2); // 아니면, memo[x]에 메모한다.
  return memo[x];
}


```

<br/><br/>

## ✨ 탑다운 방식과 바텀업 방식

<br/><br/>

dp를 구현할때 크게 탑다운 방식과 바텀업 방식이 있습니다.

<br/>

### 탑다운 (위에서 아래로)

위에 구현한 피보나치가 x=5일때, x=4,3,2,1 쭉 위에서부터 호출하면서 내려가면서 값을 구해 마지막으로 x=5의 값이 업데이트되므로 탑다운

<br/>

### 바텀업 (아래에서 위로)

아래와 같이 코드를 아래에서부터 위로 쌓아나가면 바텀업 방식입니다.

```c++
#include <iostream>

long long memo[1001];

int main(void){
  memo[0] = 0; memo[1] = 1;
  for(int i=2;i<=1000;i++){
    memo[i] = memo[i-1] + memo[i-2];
  }
  
  cout<<memo[1000]<<'\n';
  
  return 0;
}
```

<br/>

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg"></td>
    <td align="center">10870</td>
    <td align="center">피보나치 수 5</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10870">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1010</td>
    <td align="center">다리 놓기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1010">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11726</td>
    <td align="center">2xn 타일링</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11726">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">1463</td>
    <td align="center">1로 만들기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1463">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">2579</td>
    <td align="center">계단 오르기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2579">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">9095</td>
    <td align="center">1,2,3 더하기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/9095">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">1106</td>
    <td align="center">호텔</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1106">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">2294</td>
    <td align="center">동전 2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2294">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">09</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">21317</td>
    <td align="center">징검다리 건너기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/21317">바로가기</a></td>
  </tr>
</table>

<br/><br/>

# ✨ 힌트

### 1번
<details>
<summary>힌트보기</summary>
<div markdown="2">
이건 너무 쉽죠?? ㅋㅋㅋ 위에 코드 복붙만해도 됩니다.
</div>
</details>

### 2번
<details>
<summary>힌트보기</summary>
<div markdown="2">
<img width="235" alt="스크린샷 2021-11-14 오후 2 49 22" src="https://user-images.githubusercontent.com/79779676/141669331-5ea94a56-f70d-4063-a76c-90b67f8119d8.png">
</div>
</details>

### 3,4,5,6번
<details>
<summary>힌트보기</summary>
<div markdown="2">
   강의 영상 : https://www.youtube.com/watch?v=5leTtB3PQu0
</div>
</details>
