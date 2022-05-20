## 📚 06_투 포인터 (Two Pointer)

<br/>

투 포인터는 1차원 배열에서 두개의 포인터를 조작하면서 원하는 결과를 얻는 알고리즘입니다.

보통 부분합의 최대나 최소값을 구하거나, 1차원 배열에서 두 숫자의 합이 조건과 같은 것의 개수 등을 구할때 사용합니다.

투 포인터의 개념을 잘 이해하고 적재적소에 사용하면 드라마틱한 시간복잡도 개선을 할 수 있습니다.

<br/><br/>

##  ✌️투 포인터의 진행과정

<img width="968" alt="스크린샷 2022-05-18 오후 3 44 16" src="https://user-images.githubusercontent.com/79779676/168974668-e0e6e696-6b26-48d9-ad74-8bf2f2c96a52.png">

---

<img width="960" alt="스크린샷 2022-05-18 오후 3 44 22" src="https://user-images.githubusercontent.com/79779676/168974678-a7b0881a-658d-4399-a0ba-e8474308f096.png">

---

<img width="968" alt="스크린샷 2022-05-18 오후 3 44 27" src="https://user-images.githubusercontent.com/79779676/168974679-db4fcb15-0682-4f37-9352-aeba44515ccc.png">

---


<img width="973" alt="스크린샷 2022-05-18 오후 3 44 33" src="https://user-images.githubusercontent.com/79779676/168974683-91c84da2-4227-485e-8b5c-fdc5c8fbf42f.png">

---


<img width="964" alt="스크린샷 2022-05-18 오후 3 44 40" src="https://user-images.githubusercontent.com/79779676/168974688-3ed1f961-fe9e-469f-a7b8-c4c9325cfa93.png">

---


<img width="959" alt="스크린샷 2022-05-18 오후 3 44 46" src="https://user-images.githubusercontent.com/79779676/168974689-5c019d56-ef0e-473d-a531-c9042396ddb5.png">

---


<img width="954" alt="스크린샷 2022-05-18 오후 3 44 51" src="https://user-images.githubusercontent.com/79779676/168974691-4c2bca88-d3fb-43d4-88e1-6979f9bca28f.png">

---


<img width="962" alt="스크린샷 2022-05-18 오후 3 44 56" src="https://user-images.githubusercontent.com/79779676/168974696-07cb9c66-9cd1-41d5-b01e-6a23cade0ee1.png">

---


<img width="958" alt="스크린샷 2022-05-18 오후 3 45 01" src="https://user-images.githubusercontent.com/79779676/168974699-29b5bcaf-ec3e-4e3f-8e1f-755f52470e81.png">

---


<img width="953" alt="스크린샷 2022-05-18 오후 3 45 06" src="https://user-images.githubusercontent.com/79779676/168974702-27928014-ef5f-47e4-b532-3e12510c6ded.png">

---


<img width="961" alt="스크린샷 2022-05-18 오후 3 45 12" src="https://user-images.githubusercontent.com/79779676/168974707-7eba626b-8f11-4b42-ab8b-0ddf0c635db5.png">

---


<img width="958" alt="스크린샷 2022-05-18 오후 3 45 17" src="https://user-images.githubusercontent.com/79779676/168974710-e6ead11a-f7dc-43eb-a96f-508980c16594.png">

---


<img width="954" alt="스크린샷 2022-05-18 오후 3 45 22" src="https://user-images.githubusercontent.com/79779676/168974714-d594a087-73e7-49cb-90b1-ed7df3728fa5.png">

---


<img width="957" alt="스크린샷 2022-05-18 오후 3 45 27" src="https://user-images.githubusercontent.com/79779676/168974720-9f7b5a74-983b-4f43-83b1-a897ba900e5d.png">

---


<img width="959" alt="스크린샷 2022-05-18 오후 3 45 34" src="https://user-images.githubusercontent.com/79779676/168974725-7f355b33-59ff-4aab-b01a-d8570bcdd69d.png">

---


<img width="949" alt="스크린샷 2022-05-18 오후 3 45 39" src="https://user-images.githubusercontent.com/79779676/168974728-08fa885e-801d-4f56-84e6-2690afe2dd0c.png">

---


<img width="947" alt="스크린샷 2022-05-18 오후 3 45 44" src="https://user-images.githubusercontent.com/79779676/168974729-9f711b60-ab1b-4531-ac49-e798b2823630.png">

---


<img width="951" alt="스크린샷 2022-05-18 오후 3 45 49" src="https://user-images.githubusercontent.com/79779676/168974731-335104c5-35ed-4d54-b794-01210ff6a05b.png">

---


<img width="983" alt="스크린샷 2022-05-18 오후 3 45 56" src="https://user-images.githubusercontent.com/79779676/168974735-3a53be54-b0f7-4c38-90e6-926d0a4ddccf.png">


---

<br/><br/>

# 소스코드

```c++
// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2024 KB , 시간 : 0ms
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[10] = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};

    int sum = arr[0], check = 15;
    int s_p=0, e_p=0, Min_Length = 100001;
    // 시간복잡도 O(N)
    while(e_p < 10){
        if(sum == check) Min_Length = min(Min_Length, e_p-s_p+1); // sum과 check가 같다면 길이 작은거 업데이트
        if(sum >= check){ // sum이 check보다 크거나 같다면
            sum -= arr[s_p]; // 현재 arr[s_p]의 값을 빼주고
            s_p++; // s_p를 +1 해준다.
        }else{ // sum이 check보다 작다면
            e_p++; // e_p를 +1 해주고
            sum += arr[e_p]; // arr[e_p] 값을 더해준다.
        }
    }
    
    cout<<(Min_Length==100001?0:Min_Length)<<'\n';

    return 0;
}
```

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">2003</td>
    <td align="center">수들의 합 2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2003">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">20922</td>
    <td align="center">겹치는 건 싫어</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/20922">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">1806</td>
    <td align="center">부분합</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1806">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">11728</td>
    <td align="center">배열 합치기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11728">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">3273</td>
    <td align="center">두 수의 합</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/3273">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">2531</td>
    <td align="center">회전초밥</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2531">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">✅ (Bonus)</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">15961</td>
    <td align="center">회전초밥</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/15961">바로가기</a></td>
  </tr>
</table>

<br/><br/>
