#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>

using namespace std;

//sort 기준 
//const 상수 선언 시 사용//값 변경 불가능
/////
///pair의 첫 번째 인자는 숫자(key), 두 번째 인자는 빈도수///
bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {

    if (p1.second == p2.second) {     
        //빈도수가 같으면 
        return p1.first < p2.first;  
        //숫자(key)작은게 앞으로//오름차순
    }
    return p1.second > p2.second;    
    //다르면 빈도수가 큰게 앞으로//내림차순

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;  cin >> n;

    vector<int> v;
    double sum = 0;    
    int key;
  
    for (int i = 0; i < n; i++) {
        cin >> key;
        //벡터 V의 맨 뒤에 입력받은 key 삽입
        v.push_back(key);
        sum += key;
    }

    sort(v.begin(), v.end());

    //산술평균 출력
    //floor 내림함수를 이용해 소수점 없게 반올림
    //floor(N + 0.5);//N이 반올림 됨
    //#include<cmath>//반올림함수 round 사용가능//double round(double num);
    cout << (int)floor((sum / n) + 0.5) << endl;


    //중앙값 
    cout << v[n / 2] << endl;


    //최빈값
    //vector<pair<int,int>>에 다 넣고 comp 기준에 따라 정렬
    //key 와 빈도수 저장하는 pair형 vector
    vector<pair<int, int> > st;             
    vector<int>::size_type i;

    for (i = 0; i < v.size(); i++) {
        if (st.empty()) {
            st.push_back(pair<int, int>(v[i], 1));
            ///왜 1로 초기화?
            /// 
            continue;
        }

        //
        if (st.back().first == v[i]) {        //숫자(key)가같은게 있다면 
            pair<int, int> tmp = st.back();
            // ///
            tmp.second++;                     //빈도수 증가
            st.pop_back();                    //기존것 없애고 
            st.push_back(tmp);                //새로운 것 다시 삽입 
            ///
        }
        else {
            st.push_back(pair<int, int>(v[i], 1));
            ///
        }
    }


    //빈도수가 높고, 숫자(key)가 낮은 순으로 정렬 
    sort(st.begin(), st.end(), comp);

    if (st[0].second == st[1].second) {
        cout << st[1].first << endl;
    }
    else {
        cout << st[0].first << endl;
    }


    //범위
    //정렬된 v에서 맨 마지막 값과 맨 처음 값의 차로 구함
    cout << v.back() - v.front() << endl;


    return 0;
}


/*
* 질문
* vector<int>::size_type i;
* size_type은 첨자나 원소의 개수 등의 형식//벡터의 인덱스 값 표현?
* 그냥 int i; 하면 안되는 이유
*/