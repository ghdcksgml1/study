// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 13752 KB , 시간 : 264ms

#include<iostream>

using namespace std;

int arr[3000001]; // 초밥 종류
int dish[3001]; // dish[i] : 초밥 i를 담은 횟수

int main(void) {
    // 입출력 속도 최적화
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, d, k, c; cin >> N >> d >> k >> c;
    for (int i = 0; i < N; i++) { // 초밥 종류 배열에 저장
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < k; i++) { // 연속해서 초밥 k번 담기
        if (dish[arr[i]] == 0) cnt++;
        dish[arr[i]]++;
    }
    int mx = dish[c] == 0 ? cnt + 1 : cnt; // 쿠폰 사용 유무에 따라 mx 설정
    for (int i = 0; i < N; i++) { // N개의 초밥 회전시키면서 cnt 조정
        dish[arr[i]]--;
        if (dish[arr[i]] == 0) cnt--;
        if (dish[arr[(i + k) % N]] == 0) cnt++;
        dish[arr[(i + k) % N]]++;
        mx = max(mx, dish[c] == 0 ? cnt + 1 : cnt);
    }

    cout << mx << '\n';

    return 0;
}