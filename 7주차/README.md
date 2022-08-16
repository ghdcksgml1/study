## 📚 07_이분 탐색 (binary search)

이진 탐색 (binary search)은 정렬된 배열에 특정 원소가 존재하는지 여부를 파악하는 문제를

O(logN) 시간에 해결하는 알고리즘이다.

다음 예제를 통해 이분 탐색의 동작을 살펴봅시다!

<img width="949" alt="스크린샷 2022-05-26 오후 1 03 06" src="https://user-images.githubusercontent.com/79779676/170414105-38afd4f1-0c9f-4bc1-b8fc-80ca5e4e200e.png">

---

<img width="941" alt="스크린샷 2022-05-26 오후 1 10 58" src="https://user-images.githubusercontent.com/79779676/170414110-68357b2a-a188-4b7a-b444-44682d42b949.png">

---

<img width="940" alt="스크린샷 2022-05-26 오후 1 11 02" src="https://user-images.githubusercontent.com/79779676/170414114-563779e4-e393-4376-bb51-bd9501a1f2e1.png">

---

<img width="942" alt="스크린샷 2022-05-26 오후 1 11 06" src="https://user-images.githubusercontent.com/79779676/170414116-bf4f5351-1a0b-48fb-8c6e-d94cdf3f77c6.png">

---

<img width="956" alt="스크린샷 2022-05-26 오후 1 11 10" src="https://user-images.githubusercontent.com/79779676/170414119-23b12007-8184-4a5c-a0cb-f818d66ade14.png">

---

<img width="950" alt="스크린샷 2022-05-26 오후 1 11 14" src="https://user-images.githubusercontent.com/79779676/170414121-53b87e10-5265-4512-b79d-a084672fd093.png">

---

<img width="954" alt="스크린샷 2022-05-26 오후 1 11 19" src="https://user-images.githubusercontent.com/79779676/170414125-1c742488-ba2a-40a8-89c8-e331112fe6cf.png">

---

<img width="951" alt="스크린샷 2022-05-26 오후 1 11 23" src="https://user-images.githubusercontent.com/79779676/170414126-de1635c2-84fd-4ceb-ab5d-479cf61ae761.png">

---

<img width="949" alt="스크린샷 2022-05-26 오후 1 11 28" src="https://user-images.githubusercontent.com/79779676/170414128-adc78bc4-c653-45c5-8cdd-9170c79bcf0c.png">

---

<br/><br/>

## 🔗 소스코드 구현

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {8,2,1,4,9,6,7,3,5};
    sort(arr,arr+9);

    int target = 3; // 찾을 값
    int st=0,en=8;
    int result=0;

    while(st <= en){ // st와 en가 꼬이기 전까지 반복
        int mid = (st + en) / 2; // 중간 값
        if(arr[mid] >= target){ // 중간 값이 타겟보다 큰 경우 ex) |st|  |tg|  |mid|  |  |  |en|
            if(arr[mid] == target) result = mid; // 조건이 맞으면 결과 인덱스를 저장
            en = mid - 1; // ex) |st|  |tg|en|mid|  |  |  |  |
        }else{ // ex) |st|  |  |  |mid|  |tg|  |en|
            st = mid + 1; // ex) |  |  |  |  |mid|st|tg|  |en|
        }
    }

    cout<<result<<'\n';

    return 0;
}
```

<br/><br/>

##  Lower_Bound 와 Upper_Bound

<img width="962" alt="스크린샷 2022-05-26 오후 1 28 57" src="https://user-images.githubusercontent.com/79779676/170415816-4dff3a47-1e26-423d-978d-d04dcf1ea0d8.png">

### Lower_Bound 예제

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // 찾을 값
    int st=0,en=8;
    int result=1e9;

    while(st < en){
        int mid = (st + en) / 2; // 중간 값
        if(arr[mid] >= target){ 
            if(arr[mid] == target) result = min(result,mid); // 조건이 맞으면 결과 인덱스를 저장
            en = mid; 
        }else{
            st = mid + 1;
        }
    }

    cout<<result<<'\n';

    return 0;
}
// 실행결과 : 0
```

<br/>

### Upper_Bound 예제

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // 찾을 값
    int st=0,en=8;
    int result=1e9;

    while(st < en){
        int mid = (st + en) / 2; // 중간 값
        if(arr[mid] > target){
            en = mid;
        }else{
            if(arr[mid] == target) result = min(result,mid); // 조건이 맞으면 결과 인덱스를 저장
            st = mid + 1;
        }
    }

    cout<<result+1<<'\n';

    return 0;
}
// 실행결과 : 3
```

### lower_bound, upper_bound 함수를 통한 구현

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

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // 찾을 값

    cout<<lower_bound(arr,arr+9,target) - arr<<' ';
    cout<<upper_bound(arr,arr+9,target) - arr<<'\n';


    return 0;
}
// 실행결과 : 0 3
```

<br/><br/>

## 📘 7주차 과제

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1920</td>
    <td align="center">수 찾기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1920">바로가기</a></td>
    </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">19637</td>
    <td align="center">IF문 좀 대신 써줘</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/19637">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">✅</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11663</td>
    <td align="center">선분 위의 점</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11663">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">3079</td>
    <td align="center">입국심사</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/3079">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">20444</td>
    <td align="center">색종이와 가위</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/20444">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">1477</td>
    <td align="center">휴게소 세우기</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1477">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">2473</td>
    <td align="center">세 용액</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2473">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/13.svg"></td>
    <td align="center">2412</td>
    <td align="center">암벽 등반</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2412">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">09</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/14.svg"></td>
    <td align="center">1300</td>
    <td align="center">K번째 수</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1300">바로가기</a></td>
  </tr>
  <tr>
    <td align="center">10</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/14.svg"></td>
    <td align="center">7453</td>
    <td align="center">합이 0인 네 정수</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/7453">바로가기</a></td>
  </tr>
</table>


<br/><br/>
