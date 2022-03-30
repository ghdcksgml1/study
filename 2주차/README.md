## 📚 2주차 Sort

순서대로 푸는게 좋아요.

추천 문제는 (✅ 체크표시) 했습니다.

<br/>

2750번은 QuickSort [[추천강의](https://www.youtube.com/watch?v=7BDzle2n47c)]

2751번은 MergeSort 로 풉시다.

❗️ QuickSort와 MergeSort의 시간복잡도까지 알아오기.

그 이후론 sort함수 써도됌

---

사실 위의 QuickSort나 MergeSort를 직접구현할 필요없이, C++의 algorithm 라이브러리를 사용하여 풀어도 됩니다!

저 역시도 처음 알고리즘을 공부했었을때에는 Sort를 구현하다가 재미없어서 그만두었기 때문에 왠만해선 그냥 sort함수 쓰시는 것을 권장합니다.

**(대부분의 코딩테스트에서는 라이브러리 사용이 되기때문에, sort를 직접구현할 일은 전혀 없습니다.)**

단, 면접 질문에는 나올 수 있으니 시간복잡도나 어떤식으로 구현하는지는 나중에 취준하실 때 따로 공부하셔요~

<br/><br/>

## C++ 에서 sort함수 커스터마이징하기

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Tree{
  int left;
  int right;
};

bool compare1(int a,int b){
  return a > b;
}

bool compare2(pair<int,int> a,pair<int,int> b){
  if(a.first == b.first){
    return a.second > b.second;
  }
  return a.first < b.first;
}

bool compare3(Tree a,Tree b){
  if(a.left == b.left){
    return a.right > b.right;
  }
  return a.left < b.left;
}

int main(void){

  // 일반 배열의 경우
  int arr[1000];
  
  sort(arr,arr+1000); // sort(시작주소,끝주소,[사용자 정의함수]) 시작주소는 이상, 끝주소는 미만이라고 생각하심 편해요~ (기본으로 오름차순으로 정렬한다.)
  sort(arr,arr+1000,compare1); 
  
  // vector를 사용할 경우
  vector<pair<int,int>> v;
  
  sort(v.begin(),v.end()); // 기본은 first, second 둘다 오름차순 ex) (1,3) (2,2) (1,1)이 있으면, (1,1) (1,3) (2,2) 이런식으로 정렬됨.
  sort(v.begin(),v.end(),compare2);
  
  // 구조체나 클래스를 사용하는 경우
  Tree tree[1000];
  
  sort(tree,tree+1000); // 오류! (어떻게 정렬할지 정의가 되어있지 않기때문에)
  sort(tree,tree+1000,compare3);

  return 0;
}
```

<br/><br/>

## ⏰ 시간복잡도

알고리즘에서 코드가 얼마나 걸릴지를 예측할때 빅오 표기법 (Big-O)을 사용합니다.

빅오 표기법이 무엇이냐!! 코드로 보면 이해가 편합니다.

```c++
#include <iostream>

int main() {
    // 1. O(log(n))
    while(n)
        n/=2;

    // 2. O(sqrt(n))
    for(int i=0;i*i<=n;i++);

    // 3. O(n)
    for(int i=0;i<n;i++);

    // 4. O(nlog(n))
    for(int i=0;i<n;i++)
        for(int j=i;j;j/=2);

    // 5. O(nsqrt(n))
    for(int i=0;i<n;i++)
        for(int j=0;j*j<=i;j++);

    // 6. O(n^2)
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++);

    // 7. O(n^3)
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++);

    // 8. O(2^n)
    int function(int n){
        if(n==0||n==1)
            return 1;
        return function(n-1)+function(n-2);
    }

    // 9. O(n!)
    // n개의 데이터를 나열하는 방법의 수
    void function(int x, vector<int> pick, vector<bool> picked){
        if(x==n){
            for(int i=0;i<pick.size();i++)
                printf("%d\n", pick[i]);
            return;
        }
        for(int i=0;i<n;i++){
            if(picked[i])
                continue;
            pick.push_back(i);
            picked[i]=true;
            function(x+1, pick, picked);
            pick.pop_back();
            picked[i]=false;
        }
        return;
    }

    return 0;
}

```

알고리즘을 하면서 시간복잡도 계산을 많이하긴하지만, 그냥 어떤 알고리즘을 사용했을때의 시간복잡도가 얼마나 되는지

외워놓는게 시간복잡도 계산을 빨리하는데 아주 도움이 됩니다.

<br/><br/>

## 깨알 홍보 😁

이 레포지토리는 제가 알고리즘을 구현해놓은 레포지토리입니당.

https://github.com/ghdcksgml1/cpp_Algorithm_implementation

시간복잡도도 다 정리해놨으니 Star나 Fork하셔서 필요하실때마다 보세요!!

<br/><br/>

## 📘 과제 ✅ 표시 전부풀기 (풀고나서 Discussions에 아이디어, 시간복잡도까지 써서 제출해주세요!)

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
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1427</td>
    <td align="center">소트인사이드</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1427">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">2108</td>
    <td align="center">통계학</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2108">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1764</td>
    <td align="center">듣보잡</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1764">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11399</td>
    <td align="center">ATM</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11399">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg"></td>
    <td align="center">18870</td>
    <td align="center">좌표 압축</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/18870">바로가기</a></td>
  </tr>
</table>

<br/><br/>
