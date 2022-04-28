## 📚 04_에라토스테네스의 체

순서대로 푸는게 좋아요.

추천 문제는 (✅ 체크표시) 했습니다.

<br/>

## 에라토스테네스의 체

<br/>

에라토스테네스의 체는 대량의 소수를 빠르게 찾아낼 수 있는 방법이다.

소수란? 1과 자기자신 외에는 어떠한수로도 나눌 수 없는 수

원리는 아주 간단하다.

![image](https://user-images.githubusercontent.com/79779676/165432280-b01b868b-682c-4328-90bb-2a9e5240775f.png)


Ex.)

2에서 10까지 수 중에서 소수를 찾는다 가정해보자.

2에서 2를 제외한 배수들을 제거한다. ( 4, 6, 8, 10 제거)

3에서 3을 제외한 배수들을 제거한다. ( 6, 9 제거)

...

10까지 반복한 뒤 그렇게 제거되지 않은 수들을 찾아낸다.

결과 : 2, 3, 5, 7 이 소수이다.

코드 🔽

```c++
#include <iostream>
#include <vector>

using namespace std;

bool PN[11];

vector<int> v;

void PrimeNum(){
    for(int i=2;i<=10;i++){
        if(PN[i] == true) continue;
        for(int j=2;i*j<=10;j++){
            PN[i*j] = true;
        }
    }

    // 2 3 4 5 6 7 8 9 10
    // F F T F T F T T T
    for(int i=2;i<=10;i++){
        if(PN[i] == false) v.push_back(i);
    }
    // v : 2,3,5,7
}

int main(void){
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    PrimeNum();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }

    return 0;
}
```

**시간 복잡도 : O(Nlog(logN))**

##

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
    <td align="center">2960</td>
    <td align="center">에라토스테네스의 체</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2960">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1978</td>
    <td align="center">소수 찾기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1978">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">21919</td>
    <td align="center">소수 최소 공배수</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/21919">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg"></td>
    <td align="center">1929</td>
    <td align="center">소수 구하기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1929">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/13.svg"></td>
    <td align="center">1644</td>
    <td align="center">소수의 연속합</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1644">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/15.svg"></td>
    <td align="center">1016</td>
    <td align="center">제곱 ㄴㄴ수</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1016">바로가기</a></td>
  </tr>
</table>

<br/><br/>
