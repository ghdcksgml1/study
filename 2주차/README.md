## ๐ 2์ฃผ์ฐจ Sort

์์๋๋ก ํธ๋๊ฒ ์ข์์.

์ถ์ฒ ๋ฌธ์ ๋ (โ ์ฒดํฌํ์) ํ์ต๋๋ค.

<br/>

2750๋ฒ์ QuickSort [[์ถ์ฒ๊ฐ์](https://www.youtube.com/watch?v=7BDzle2n47c)]

2751๋ฒ์ MergeSort ๋ก ํ์๋ค.

โ๏ธ QuickSort์ MergeSort์ ์๊ฐ๋ณต์ก๋๊น์ง ์์์ค๊ธฐ.

๊ทธ ์ดํ๋ก  sortํจ์ ์จ๋๋

---

์ฌ์ค ์์ QuickSort๋ MergeSort๋ฅผ ์ง์ ๊ตฌํํ  ํ์์์ด, C++์ algorithm ๋ผ์ด๋ธ๋ฌ๋ฆฌ๋ฅผ ์ฌ์ฉํ์ฌ ํ์ด๋ ๋ฉ๋๋ค!

์  ์ญ์๋ ์ฒ์ ์๊ณ ๋ฆฌ์ฆ์ ๊ณต๋ถํ์์๋์๋ Sort๋ฅผ ๊ตฌํํ๋ค๊ฐ ์ฌ๋ฏธ์์ด์ ๊ทธ๋ง๋์๊ธฐ ๋๋ฌธ์ ์ ๋งํด์  ๊ทธ๋ฅ sortํจ์ ์ฐ์๋ ๊ฒ์ ๊ถ์ฅํฉ๋๋ค.

**(๋๋ถ๋ถ์ ์ฝ๋ฉํ์คํธ์์๋ ๋ผ์ด๋ธ๋ฌ๋ฆฌ ์ฌ์ฉ์ด ๋๊ธฐ๋๋ฌธ์, sort๋ฅผ ์ง์ ๊ตฌํํ  ์ผ์ ์ ํ ์์ต๋๋ค.)**

๋จ, ๋ฉด์  ์ง๋ฌธ์๋ ๋์ฌ ์ ์์ผ๋ ์๊ฐ๋ณต์ก๋๋ ์ด๋ค์์ผ๋ก ๊ตฌํํ๋์ง๋ ๋์ค์ ์ทจ์คํ์ค ๋ ๋ฐ๋ก ๊ณต๋ถํ์์~

<br/><br/>

## C++ ์์ sortํจ์ ์ปค์คํฐ๋ง์ด์งํ๊ธฐ

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

  // ์ผ๋ฐ ๋ฐฐ์ด์ ๊ฒฝ์ฐ
  int arr[1000];
  
  sort(arr,arr+1000); // sort(์์์ฃผ์,๋์ฃผ์,[์ฌ์ฉ์ ์ ์ํจ์]) ์์์ฃผ์๋ ์ด์, ๋์ฃผ์๋ ๋ฏธ๋ง์ด๋ผ๊ณ  ์๊ฐํ์ฌ ํธํด์~ (๊ธฐ๋ณธ์ผ๋ก ์ค๋ฆ์ฐจ์์ผ๋ก ์ ๋ ฌํ๋ค.)
  sort(arr,arr+1000,compare1); 
  
  // vector๋ฅผ ์ฌ์ฉํ  ๊ฒฝ์ฐ
  vector<pair<int,int>> v;
  
  sort(v.begin(),v.end()); // ๊ธฐ๋ณธ์ first, second ๋๋ค ์ค๋ฆ์ฐจ์ ex) (1,3) (2,2) (1,1)์ด ์์ผ๋ฉด, (1,1) (1,3) (2,2) ์ด๋ฐ์์ผ๋ก ์ ๋ ฌ๋จ.
  sort(v.begin(),v.end(),compare2);
  
  // ๊ตฌ์กฐ์ฒด๋ ํด๋์ค๋ฅผ ์ฌ์ฉํ๋ ๊ฒฝ์ฐ
  Tree tree[1000];
  
  sort(tree,tree+1000); // ์ค๋ฅ! (์ด๋ป๊ฒ ์ ๋ ฌํ ์ง ์ ์๊ฐ ๋์ด์์ง ์๊ธฐ๋๋ฌธ์)
  sort(tree,tree+1000,compare3);

  return 0;
}
```

<br/><br/>

## โฐ ์๊ฐ๋ณต์ก๋

์๊ณ ๋ฆฌ์ฆ์์ ์ฝ๋๊ฐ ์ผ๋ง๋ ๊ฑธ๋ฆด์ง๋ฅผ ์์ธกํ ๋ ๋น์ค ํ๊ธฐ๋ฒ (Big-O)์ ์ฌ์ฉํฉ๋๋ค.

๋น์ค ํ๊ธฐ๋ฒ์ด ๋ฌด์์ด๋!! ์ฝ๋๋ก ๋ณด๋ฉด ์ดํด๊ฐ ํธํฉ๋๋ค.

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
    // n๊ฐ์ ๋ฐ์ดํฐ๋ฅผ ๋์ดํ๋ ๋ฐฉ๋ฒ์ ์
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

์๊ณ ๋ฆฌ์ฆ์ ํ๋ฉด์ ์๊ฐ๋ณต์ก๋ ๊ณ์ฐ์ ๋ง์ดํ๊ธดํ์ง๋ง, ๊ทธ๋ฅ ์ด๋ค ์๊ณ ๋ฆฌ์ฆ์ ์ฌ์ฉํ์๋์ ์๊ฐ๋ณต์ก๋๊ฐ ์ผ๋ง๋ ๋๋์ง

์ธ์๋๋๊ฒ ์๊ฐ๋ณต์ก๋ ๊ณ์ฐ์ ๋นจ๋ฆฌํ๋๋ฐ ์์ฃผ ๋์์ด ๋ฉ๋๋ค.

<br/><br/>

## ๊นจ์ ํ๋ณด ๐

์ด ๋ ํฌ์งํ ๋ฆฌ๋ ์ ๊ฐ ์๊ณ ๋ฆฌ์ฆ์ ๊ตฌํํด๋์ ๋ ํฌ์งํ ๋ฆฌ์๋๋น.

https://github.com/ghdcksgml1/cpp_Algorithm_implementation

์๊ฐ๋ณต์ก๋๋ ๋ค ์ ๋ฆฌํด๋จ์ผ๋ Star๋ Forkํ์์ ํ์ํ์ค๋๋ง๋ค ๋ณด์ธ์!!

<br/><br/>

## ๐ ๊ณผ์  โ ํ์ ์ ๋ถํ๊ธฐ (ํ๊ณ ๋์ Discussions์ ์์ด๋์ด, ์๊ฐ๋ณต์ก๋๊น์ง ์จ์ ์ ์ถํด์ฃผ์ธ์!)

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
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/5.svg"></td>
    <td align="center">2750</td>
    <td align="center">์ ์ ๋ ฌํ๊ธฐ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2750">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">2751</td>
    <td align="center">์ ์ ๋ ฌํ๊ธฐ 2</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2751">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">10989</td>
    <td align="center">์ ์ ๋ ฌํ๊ธฐ 3</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/10989">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg"></td>
    <td align="center">1427</td>
    <td align="center">์ํธ์ธ์ฌ์ด๋</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1427">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">2108</td>
    <td align="center">ํต๊ณํ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2108">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1764</td>
    <td align="center">๋ฃ๋ณด์ก</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1764">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">07</td>
    <td align="center">โ</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">11399</td>
    <td align="center">ATM</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/11399">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
  <tr>
    <td align="center">08</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg"></td>
    <td align="center">18870</td>
    <td align="center">์ขํ ์์ถ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/18870">๋ฐ๋ก๊ฐ๊ธฐ</a></td>
  </tr>
</table>

<br/><br/>
