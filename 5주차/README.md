# ๐ 05_Dynamic Programming ๋์  ํ๋ก๊ทธ๋๋ฐ

์์๋๋ก ํธ๋๊ฒ ์ข์์.

์ถ์ฒ ๋ฌธ์ ๋ (โ ์ฒดํฌํ์) ํ์ต๋๋ค.

<br/>

## โจ ๊ฐ๋

์ด๋ฒ์๊ฐ์ ๋ค์ด๋๋ฏน ํ๋ก๊ทธ๋๋ฐ์๋๋ค. DP๋ผ๋ ๋ง์ด ๋ถ๋ฆฌ์ฃ ...

๊ฐ๋์ ์์ฃผ ๊ฐ๋จํ์ง๋ง, ๋์ด๋์ ์คํํธ๋ผ์ด ์๋ ๋์ด์... ์ ๋ํ ์ ๋ชปํ๋ ์๊ณ ๋ฆฌ์ฆ ์ค ํ๋์๋๋ค.

๋์  ํ๋ก๊ทธ๋๋ฐ์ ๊ฐ์ฅ ์ค๋ชํ๊ธฐ ์ฌ์ด ์์๊ฐ ๋ฐ๋ก ํผ๋ณด๋์น ์์ด์๋๋ค.

ํผ๋ณด๋์น ์์ด์ ์๋์ ๊ฐ์ ์ ํ์์ ๊ฐ์ง๋๋ค.

F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub> (n โฅ 2)

๋์  ํ๋ก๊ทธ๋๋ฐ์ ๋ฐฐ์ฐ์ง ์์๋ค๋ฉด, ์๋์ ๊ฐ์ด ์ฌ๊ทํจ์๋ฅผ ํตํด ํผ๋ณด๋์น ํจ์๋ฅผ ๊ตฌํํ ๊ฒ๋๋ค.

```c++
int fibonacci(int x){
  if(x==0) return 0;
  if(x==1) return 1;
  return fibonacci(x-1) + fibonacci(x-2);
}
```

ํ์ง๋ง, ์ด๋ฌํ ์์ ๊ฒฝ์ฐ X๊ฐ 50์ ๋๋ง ๋์ด๊ฐ๋ ์์ฒญ๋ ์ฐ์ฐ์ ์ํ๊ธฐ ๋๋ฌธ์

ํฐ ํผ๋ณด๋์น ์๋ฅผ ๊ตฌํ๊ธฐ์ ์ด๋ ค์์ด ์์ต๋๋ค.

<br/><br/>

x=5์ผ ๊ฒฝ์ฐ์ ํจ์ ์ ๊ฐ๋ฅผ ๋ณด๋ฉด ์๋์ ๊ทธ๋ฆผ๊ณผ ๊ฐ์ต๋๋ค.

<img width="575" alt="แแณแแณแแตแซแแฃแบ 2022-05-04 แแฉแแฎ 11 47 12" src="https://user-images.githubusercontent.com/79779676/166708583-09b705d4-b01c-4526-939f-0f3a02ddf0b8.png">
<br/>

์๋ ๋๊ทธ๋ผ๋ฏธ ์น ๋ถ๋ถ์ ๋ณด๋ฉด ์ด๋ฏธ ๊ณ์ฐํ ๊ฐ์์๋ ๋ค์ ํจ์๋ฅผ ๋ค์ด๊ฐ ๊ณ์ฐ์ ํ๊ณ ์๋

๋ฐ๋ณด๊ฐ์ ๋ชจ์ต์ ๋ณด์ค ์ ์์ต๋๋ค.

<img width="555" alt="แแณแแณแแตแซแแฃแบ 2022-05-04 แแฉแแฎ 11 58 18" src="https://user-images.githubusercontent.com/79779676/166709183-bad4be18-35da-47ec-837a-9ca2853eb222.png">

<br/><br/>

์ด๋ฅผ ๋ฐฉ์งํ๊ณ ์, ์คํ์ํ์์ ์ด๋ฏธ ์ฐ์ฐ์ด ๋ ๊ฐ์ ๊ฐ์ ธ๋ค ์ฐ๋ฉด ๋ถํ์ํ ํจ์์ ๋ฐ๋ณต์ ์ค์ผ ์ ์์ต๋๋ค.

<img width="553" alt="แแณแแณแแตแซแแฃแบ 2022-05-05 แแฉแแฅแซ 12 01 31" src="https://user-images.githubusercontent.com/79779676/166710626-ff9f3e0e-1e6f-4f8e-a6d5-3649ffc3a3a5.png">

<br/><br/>

์ด๋ ๊ฒ ๋ฉ๋ชจ์ด์ ์ด์ (memoization) ๋ฐฉ๋ฒ ์ฆ, ๋ฉ๋ชจ๋ฅผํ์ฌ ๋ถํ์ํ ๊ณ์ฐ์ ์ค์ด๋ ๊ฒ์ ๋์  ํ๋ก๊ทธ๋๋ฐ์ด๋ผ๊ณ  ํฉ๋๋ค.

์๋์ ๊ฐ์ด ์ฝ๋๋ฅผ ๊ตฌํํ  ์ ์์ต๋๋ค.

```c++
long long memo[1001];

long long fibonacci(int x){
  if(x==0) return 0;
  if(x==1) return 1;
  if(memo[x] != 0) return memo[x]; // ๋ง์ฝ memo[x]๊ฐ 0์ด ์๋๋ฉด, ์ฆ ๋ฉ๋ชจ๊ฐ ๋์ด์์ผ๋ฉด memo[x] ๊ฐ์ ๋ฆฌํดํ๋ค.
  memo[x] = fibonacci(x-1) + fibonacci(x-2); // ์๋๋ฉด, memo[x]์ ๋ฉ๋ชจํ๋ค.
  return memo[x];
}


```

<br/><br/>

## โจ ํ๋ค์ด ๋ฐฉ์๊ณผ ๋ฐํ์ ๋ฐฉ์

<br/><br/>

dp๋ฅผ ๊ตฌํํ ๋ ํฌ๊ฒ ํ๋ค์ด ๋ฐฉ์๊ณผ ๋ฐํ์ ๋ฐฉ์์ด ์์ต๋๋ค.

<br/>

### ํ๋ค์ด (์์์ ์๋๋ก)

์์ ๊ตฌํํ ํผ๋ณด๋์น๊ฐ x=5์ผ๋, x=4,3,2,1 ์ญ ์์์๋ถํฐ ํธ์ถํ๋ฉด์ ๋ด๋ ค๊ฐ๋ฉด์ ๊ฐ์ ๊ตฌํด ๋ง์ง๋ง์ผ๋ก x=5์ ๊ฐ์ด ์๋ฐ์ดํธ๋๋ฏ๋ก ํ๋ค์ด

<br/>

### ๋ฐํ์ (์๋์์ ์๋ก)

์๋์ ๊ฐ์ด ์ฝ๋๋ฅผ ์๋์์๋ถํฐ ์๋ก ์์๋๊ฐ๋ฉด ๋ฐํ์ ๋ฐฉ์์๋๋ค.

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg"></td>
    <td align="center">10870</td>
    <td align="center">ํผ๋ณด๋์น ์ 5</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10870">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1010</td>
    <td align="center">๋ค๋ฆฌ ๋๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1010">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11726</td>
    <td align="center">2xn ํ์ผ๋ง</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11726">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">1463</td>
    <td align="center">1๋ก ๋ง๋ค๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1463">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">2579</td>
    <td align="center">๊ณ๋จ ์ค๋ฅด๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2579">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">9095</td>
    <td align="center">1,2,3 ๋ํ๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/9095">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">1106</td>
    <td align="center">ํธํ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1106">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">2294</td>
    <td align="center">๋์  2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2294">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">09</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/10.svg"></td>
    <td align="center">21317</td>
    <td align="center">์ง๊ฒ๋ค๋ฆฌ ๊ฑด๋๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/21317">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
</table>

<br/><br/>

# โจ ํํธ

### 1๋ฒ
<details>
<summary>ํํธ๋ณด๊ธฐ</summary>
<div markdown="2">
์ด๊ฑด ๋๋ฌด ์ฝ์ฃ ?? ใใใ ์์ ์ฝ๋ ๋ณต๋ถ๋งํด๋ ๋ฉ๋๋ค.
</div>
</details>

### 2๋ฒ
<details>
<summary>ํํธ๋ณด๊ธฐ</summary>
<div markdown="2">
<img width="235" alt="แแณแแณแแตแซแแฃแบ 2021-11-14 แแฉแแฎ 2 49 22" src="https://user-images.githubusercontent.com/79779676/141669331-5ea94a56-f70d-4063-a76c-90b67f8119d8.png">
</div>
</details>

### 3,4,5,6๋ฒ
<details>
<summary>ํํธ๋ณด๊ธฐ</summary>
<div markdown="2">
   ๊ฐ์ ์์ : https://www.youtube.com/watch?v=5leTtB3PQu0
</div>
</details>
