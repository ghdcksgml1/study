## π 04_μλΌν μ€νλ€μ€μ μ²΄

μμλλ‘ νΈλκ² μ’μμ.

μΆμ² λ¬Έμ λ (β μ²΄ν¬νμ) νμ΅λλ€.

<br/>

## μλΌν μ€νλ€μ€μ μ²΄

<br/>

μλΌν μ€νλ€μ€μ μ²΄λ λλμ μμλ₯Ό λΉ λ₯΄κ² μ°ΎμλΌ μ μλ λ°©λ²μ΄λ€.

μμλ? 1κ³Ό μκΈ°μμ  μΈμλ μ΄λ νμλ‘λ λλ μ μλ μ

μλ¦¬λ μμ£Ό κ°λ¨νλ€.

![image](https://user-images.githubusercontent.com/79779676/165432280-b01b868b-682c-4328-90bb-2a9e5240775f.png)


Ex.)

2μμ 10κΉμ§ μ μ€μμ μμλ₯Ό μ°Ύλλ€ κ°μ ν΄λ³΄μ.

2μμ 2λ₯Ό μ μΈν λ°°μλ€μ μ κ±°νλ€. ( 4, 6, 8, 10 μ κ±°)

3μμ 3μ μ μΈν λ°°μλ€μ μ κ±°νλ€. ( 6, 9 μ κ±°)

...

10κΉμ§ λ°λ³΅ν λ€ κ·Έλ κ² μ κ±°λμ§ μμ μλ€μ μ°ΎμλΈλ€.

κ²°κ³Ό : 2, 3, 5, 7 μ΄ μμμ΄λ€.

μΆμ² : https://namu.wiki/w/%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98%20%EC%B2%B4

<br/><br/>

## μμ€μ½λ π½

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
    // μμΆλ ₯ μλ μ΅μ ν
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    PrimeNum();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }

    return 0;
}
```

**μκ° λ³΅μ‘λ : O(Nlog(logN))**

##

<table>
  <tr>
    <td align="center">μμ</td>
    <td align="center">μΆμ² λ¬Έμ </td>
    <td align="center">λμ΄λ</td>
    <td align="center">λ¬Έμ  λ²νΈ</td>
    <td align="center">λ¬Έμ  μ΄λ¦</td>
    <td align="center">λ¬Έμ  λ§ν¬</td>
  </tr>
  <tr>
    <td align="center">01</td>
    <td align="center">β</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">2960</td>
    <td align="center">μλΌν μ€νλ€μ€μ μ²΄</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/2960">λ°λ‘κ°κΈ°</a></td>
  </tr>
  <tr>
    <td align="center">02</td>
    <td align="center">β</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg"></td>
    <td align="center">1978</td>
    <td align="center">μμ μ°ΎκΈ°</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1978">λ°λ‘κ°κΈ°</a></td>
  </tr>
  <tr>
    <td align="center">03</td>
    <td align="center">β</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg"></td>
    <td align="center">21919</td>
    <td align="center">μμ μ΅μ κ³΅λ°°μ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/21919">λ°λ‘κ°κΈ°</a></td>
  </tr>
  <tr>
    <td align="center">04</td>
    <td align="center">β</td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg"></td>
    <td align="center">1929</td>
    <td align="center">μμ κ΅¬νκΈ°</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1929">λ°λ‘κ°κΈ°</a></td>
  </tr>
  <tr>
    <td align="center">05</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/13.svg"></td>
    <td align="center">1644</td>
    <td align="center">μμμ μ°μν©</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1644">λ°λ‘κ°κΈ°</a></td>
  </tr>
  <tr>
    <td align="center">06</td>
    <td align="center"></td>
    <td align="center"><img height="23px" width="25px" src="https://d2gd6pc034wcta.cloudfront.net/tier/15.svg"></td>
    <td align="center">1016</td>
    <td align="center">μ κ³± γ΄γ΄μ</td>
    <td align="center"><a href="https://www.acmicpc.net/problem/1016">λ°λ‘κ°κΈ°</a></td>
  </tr>
</table>

<br/><br/>
