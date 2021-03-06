# ๐ 03_Data Structure (์๋ฃ๊ตฌ์กฐ)

<br/>

์ค๋ ๋ฐฐ์ธ ์๋ฃ๊ตฌ์กฐ๋ **vector, stack, queue, deque** ์๋๋ค.

<br/>

## โฝ๏ธ Vector (๋ฒกํฐ)

<br/>

<img width="556" alt="แแณแแณแแตแซแแฃแบ 2022-04-06 แแฉแแฎ 2 34 03" src="https://user-images.githubusercontent.com/79779676/161902524-991abb42-ef93-49ac-9385-33bf0203a140.png">

```c++
vector<int> v; // 1, 5, 2, 4, 10, 5
```

- v.front() = vector์ ๋งจ ์ ์์;  // v.front() = 1 
- v.begin() = vector์ ๋งจ ์ ์ฃผ์;  // v.begin() = v์ ์์์ฃผ์
- v.size() = vector์ ์์ ๊ฐ์;  // v.size() = 6 v์ ๊ฐ์
- v.back() = vector์ ๋งจ ๋ค ์์;  // v.back() = 5 
- v.end() = vector์ ๋งจ ๋ค ์ฃผ์;  // v.end() = v์ ๋ ์ฃผ์
- v.push_back() = vector์ ๋งจ ๋ค; // v.push_back(3) => 1, 5, 2, 4, 10, 5, 3
- cout<<v[2]; // 2 ์ถ๋ ฅ, ๊ธฐ์กด ๋ฐฐ์ด์ฒ๋ผ ์ธ๋ฑ์ค์ ์ ๊ทผํ์ฌ ์ฌ์ฉํ  ์ ์๋ค.

<br/><br/>

## ๐ Stack (์คํ)

<br/>

์คํ์ Last In First Out (LIFO) ๊ตฌ์กฐ๋ก ๊ฐ์ฅ ์ต๊ทผ์ ๋ค์ด๊ฐ ๊ฐ์ฒด๊ฐ ๊ฐ์ฅ ๋จผ์  ๋์ค๋ ์๋ฃ๊ตฌ์กฐ์ด๋ค.

<img width="717" alt="แแณแแณแแตแซแแฃแบ 2022-04-06 แแฉแแฎ 2 55 39" src="https://user-images.githubusercontent.com/79779676/161904854-9b859fe0-dbb7-45e5-926e-e64820e4327e.png">

```c++
stack<int> st; // stack ๋ณ์ ์ ์ธ
```
- st.empty() : ์คํ์ด ๋น์ด์์ผ๋ฉด true, ๋น์ด์์ง ์์ผ๋ฉด false๋ฅผ ๋ฆฌํดํ๋ค. ex) true
- st.push(๊ฐ) : ์คํ์ ๊ฐ์ ์ง์ด ๋ฃ๋๋ค. ex) st.push(1); st.push(2); st.push(3);
- st.pop() : ์ต์๋จ ์คํ์ ๊ฐ์ ๋บ๋ค. ex) st.pop();
- st.top() : ์คํ์ ๋งจ ์๊ฐ์ ๊ฐ์ ธ์จ๋ค. ex) st.top(); => 2

<br/><br/>

## ๐ Queue (ํ)

<br/>

ํ๋ First In First Out (FIFO) ๊ตฌ์กฐ๋ก ๊ฐ์ฅ ๋จผ์  ๋ค์ด๊ฐ ๊ฐ์ฒด๊ฐ ๊ฐ์ฅ ๋จผ์  ๋์ค๋ ๊ตฌ์กฐ์๋๋ค.

<img width="765" alt="แแณแแณแแตแซแแฃแบ 2022-04-06 แแฉแแฎ 3 09 42" src="https://user-images.githubusercontent.com/79779676/162166858-e6a784bf-1cdb-4381-b94e-fcafd2653cc3.png">

```c++
queue<int> q; // queue ์ ์ธ
```

- q.empty() : ํ๊ฐ ๋น์ด์์ผ๋ฉด true, ๋น์ด์์ง ์์ผ๋ฉด false๋ฅผ ๋ฆฌํดํ๋ค.
- q.push(๊ฐ) : ํ์ ๊ฐ์ ์ง์ด๋ฃ๋๋ค.
- q.pop() : ๊ฐ์ฅ ์์ ์๋ ํ์ ๊ฐ์ ๋บ๋ค.
- q.front() : ํ์ ๊ฐ์ฅ ์์ ๊ฐ์ ๊ฐ์ ธ์จ๋ค.

<br/><br/>

## ๐ฅ Deque (๋ฑ)

<br/>

๋ฑ์ ๊ตฌ์กฐ๋ ํ์ ๋น์ทํ๊ฒ ์๊ฒผ์ง๋ง, ํ์์ ์ฐจ๋ณ์ ์ ๊ฐ์ ์์์ ๋ฃ์ ์๋ ๋บ์๋ ์๊ณ , ๊ฐ์ ๋ค์์ ๋ฃ์ ์๋ ๋บ์๋ ์์ต๋๋ค.

<img width="486" alt="Screen Shot 2021-10-01 at 5 10 45 PM" src="https://user-images.githubusercontent.com/79779676/135587439-846c65b1-83d7-4032-aef7-bb13223666f1.png">

```c++
deque<int> dq; // deque ์ ์ธ
```

- dq.empty() : ๋ฑ์ด ๋น์ด์์ผ๋ฉด true, ๋น์ด์์ง ์์ผ๋ฉด false๋ฅผ ๋ฆฌํดํ๋ค.
- dq.push_front(๊ฐ) : ๋ฑ์ด ์๋ถ๋ถ์ ๊ฐ์ ๋ฃ์ด์ค๋ค. ๊ธฐ์กด์ ์๋๊ฐ๋ค์ ํ์นธ์ฉ ๋ฐ๋ฆฐ๋ค.
- dq.pop_front() : ๋ฑ์ ์๋ถ๋ถ์ ๊ฐ์ ๋นผ์ค๋ค.
- dq.push_back(๊ฐ) : ๋ฑ์ ๋ท๋ถ๋ถ์ ๊ฐ์ ๋ฃ์ด์ค๋ค.
- dq.pop_back() : ๋ฑ์ ๋ท๋ถ๋ถ์ ๊ฐ์ ๋นผ์ค๋ค.
- dq[2]; // ๋ฒกํฐ์ ๋ง์ฐฌ๊ฐ์ง๋ก ์ธ๋ฑ์ค๋ก ๊ฐ์ ์ ๊ทผํ  ์ ์๋ค.

<br/><br/>

---

**๊ฐ์ ์ถ์ฒ (์คํ) :** https://www.youtube.com/watch?v=0DsyCXIN7Wg

**๊ฐ์ ์ถ์ฒ (ํ) :** https://www.youtube.com/watch?v=D_fwSy5tRAY

**๊ฐ์ ์ถ์ฒ (๋ฑ) :** https://www.youtube.com/watch?v=0mEzJ4S1d8o

<br/><br/>

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
    <td align="center">10828</td>
    <td align="center">์คํ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10828">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">9012</td>
    <td align="center">๊ดํธ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/9012">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1158</td>
    <td align="center">์์ธํธ์ค ๋ฌธ์ </td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1158">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">10845</td>
    <td align="center">ํ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10845">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">18258</td>
    <td align="center">ํ2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/18258">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">10866</td>
    <td align="center">๋ฑ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10866">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">2346</td>
    <td align="center">ํ์  ํฐ๋จ๋ฆฌ๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2346">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/11.svg"></td>
    <td align="center">14891</td>
    <td align="center">ํฑ๋๋ฐํด</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/14891">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
</table>

- 8๋ฒ ๋ฌธ์  ์ ๋ตํ์ด์๋๋ค. **(ํน๋ณํ ์๊ณ ๋ฆฌ์ฆ ์์ด ๊ตฌํ๋ ฅ์ด ์๊ตฌ๋๋ ๋ฌธ์ ์๋๋ค.)**

**๋งํฌ: https://blog.naver.com/ghdcksgml2/222401090306**

<br/><br/>
