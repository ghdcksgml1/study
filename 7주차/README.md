## ๐ 07_์ด๋ถ ํ์ (binary search)

์ด์ง ํ์ (binary search)์ ์ ๋ ฌ๋ ๋ฐฐ์ด์ ํน์  ์์๊ฐ ์กด์ฌํ๋์ง ์ฌ๋ถ๋ฅผ ํ์ํ๋ ๋ฌธ์ ๋ฅผ

O(logN) ์๊ฐ์ ํด๊ฒฐํ๋ ์๊ณ ๋ฆฌ์ฆ์ด๋ค.

๋ค์ ์์ ๋ฅผ ํตํด ์ด๋ถ ํ์์ ๋์์ ์ดํด๋ด์๋ค!

<img width="949" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 03 06" src="https://user-images.githubusercontent.com/79779676/170414105-38afd4f1-0c9f-4bc1-b8fc-80ca5e4e200e.png">

---

<img width="941" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 10 58" src="https://user-images.githubusercontent.com/79779676/170414110-68357b2a-a188-4b7a-b444-44682d42b949.png">

---

<img width="940" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 02" src="https://user-images.githubusercontent.com/79779676/170414114-563779e4-e393-4376-bb51-bd9501a1f2e1.png">

---

<img width="942" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 06" src="https://user-images.githubusercontent.com/79779676/170414116-bf4f5351-1a0b-48fb-8c6e-d94cdf3f77c6.png">

---

<img width="956" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 10" src="https://user-images.githubusercontent.com/79779676/170414119-23b12007-8184-4a5c-a0cb-f818d66ade14.png">

---

<img width="950" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 14" src="https://user-images.githubusercontent.com/79779676/170414121-53b87e10-5265-4512-b79d-a084672fd093.png">

---

<img width="954" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 19" src="https://user-images.githubusercontent.com/79779676/170414125-1c742488-ba2a-40a8-89c8-e331112fe6cf.png">

---

<img width="951" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 23" src="https://user-images.githubusercontent.com/79779676/170414126-de1635c2-84fd-4ceb-ab5d-479cf61ae761.png">

---

<img width="949" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 11 28" src="https://user-images.githubusercontent.com/79779676/170414128-adc78bc4-c653-45c5-8cdd-9170c79bcf0c.png">

---

<br/><br/>

## ๐ ์์ค์ฝ๋ ๊ตฌํ

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // ์์ถ๋ ฅ ์๋ ์ต์ ํ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {8,2,1,4,9,6,7,3,5};
    sort(arr,arr+9);

    int target = 3; // ์ฐพ์ ๊ฐ
    int st=0,en=8;
    int result=0;

    while(st <= en){ // st์ en๊ฐ ๊ผฌ์ด๊ธฐ ์ ๊น์ง ๋ฐ๋ณต
        int mid = (st + en) / 2; // ์ค๊ฐ ๊ฐ
        if(arr[mid] >= target){ // ์ค๊ฐ ๊ฐ์ด ํ๊ฒ๋ณด๋ค ํฐ ๊ฒฝ์ฐ ex) |st|  |tg|  |mid|  |  |  |en|
            if(arr[mid] == target) result = mid; // ์กฐ๊ฑด์ด ๋ง์ผ๋ฉด ๊ฒฐ๊ณผ ์ธ๋ฑ์ค๋ฅผ ์ ์ฅ
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

##  Lower_Bound ์ Upper_Bound

<img width="962" alt="แแณแแณแแตแซแแฃแบ 2022-05-26 แแฉแแฎ 1 28 57" src="https://user-images.githubusercontent.com/79779676/170415816-4dff3a47-1e26-423d-978d-d04dcf1ea0d8.png">

### Lower_Bound ์์ 

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // ์์ถ๋ ฅ ์๋ ์ต์ ํ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // ์ฐพ์ ๊ฐ
    int st=0,en=8;
    int result=1e9;

    while(st < en){
        int mid = (st + en) / 2; // ์ค๊ฐ ๊ฐ
        if(arr[mid] >= target){ 
            if(arr[mid] == target) result = min(result,mid); // ์กฐ๊ฑด์ด ๋ง์ผ๋ฉด ๊ฒฐ๊ณผ ์ธ๋ฑ์ค๋ฅผ ์ ์ฅ
            en = mid; 
        }else{
            st = mid + 1;
        }
    }

    cout<<result<<'\n';

    return 0;
}
// ์คํ๊ฒฐ๊ณผ : 0
```

<br/>

### Upper_Bound ์์ 

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // ์์ถ๋ ฅ ์๋ ์ต์ ํ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // ์ฐพ์ ๊ฐ
    int st=0,en=8;
    int result=1e9;

    while(st < en){
        int mid = (st + en) / 2; // ์ค๊ฐ ๊ฐ
        if(arr[mid] > target){
            en = mid;
        }else{
            if(arr[mid] == target) result = min(result,mid); // ์กฐ๊ฑด์ด ๋ง์ผ๋ฉด ๊ฒฐ๊ณผ ์ธ๋ฑ์ค๋ฅผ ์ ์ฅ
            st = mid + 1;
        }
    }

    cout<<result+1<<'\n';

    return 0;
}
// ์คํ๊ฒฐ๊ณผ : 3
```

### lower_bound, upper_bound ํจ์๋ฅผ ํตํ ๊ตฌํ

```c++
// ์ธ์ด : C++ , (์ฑ๊ณต/์คํจ) : 1/0 , ๋ฉ๋ชจ๋ฆฌ : 2024 KB , ์๊ฐ : 0ms
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> // memset

using namespace std;

int main(void){
    // ์์ถ๋ ฅ ์๋ ์ต์ ํ
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9] = {1,1,1,2,4,5,7,10,12};

    int target = 1; // ์ฐพ์ ๊ฐ

    cout<<lower_bound(arr,arr+9,target) - arr<<' ';
    cout<<upper_bound(arr,arr+9,target) - arr<<'\n';


    return 0;
}
// ์คํ๊ฒฐ๊ณผ : 0 3
```

<br/><br/>

## ๐ 7์ฃผ์ฐจ ๊ณผ์ 

<br/>

<table>
  <tr>
    <td align="center">์์</td>
    <td align="center">์ถ์ฒ ๋ฌธ์ </td>
    <td align="center">๋์ด๋</td>
    <td align="center">๋ฌธ์  ๋ฒํธ</td>
    <td align="center">๋ฌธ์  ์ด๋ฆ</td>
    <td align="center">๋ฌธ์  ๋งํฌ</td>
  </tr>
  <tr>
    <td align="center">01</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1920</td>
    <td align="center">์ ์ฐพ๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1920">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
    </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">19637</td>
    <td align="center">IF๋ฌธ ์ข ๋์  ์จ์ค</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/19637">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11663</td>
    <td align="center">์ ๋ถ ์์ ์ </td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11663">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">3079</td>
    <td align="center">์๊ตญ์ฌ์ฌ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/3079">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">20444</td>
    <td align="center">์์ข์ด์ ๊ฐ์</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/20444">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">1477</td>
    <td align="center">ํด๊ฒ์ ์ธ์ฐ๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1477">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/12.svg"></td>
    <td align="center">2473</td>
    <td align="center">์ธ ์ฉ์ก</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2473">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/13.svg"></td>
    <td align="center">2412</td>
    <td align="center">์๋ฒฝ ๋ฑ๋ฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2412">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">09</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/14.svg"></td>
    <td align="center">1300</td>
    <td align="center">K๋ฒ์งธ ์</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1300">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">10</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/14.svg"></td>
    <td align="center">7453</td>
    <td align="center">ํฉ์ด 0์ธ ๋ค ์ ์</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/7453">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
</table>


<br/><br/>
