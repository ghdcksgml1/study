#include <iostream>
#include <vector>

// 문제 풀이 유의점
// 1) 표현 범위 (최대 2^63 - 1이므로, int64_t 자료형 사용함)
// 2) 소수가 중복되지 않도록 유의 (ex) 2 2 3 5 7을 그냥 곱하면 420이지만, 실제 최소공배수는 210임
int64_t findLCM(std::vector<int> v, int maxVal) {
    int64_t ret = 1;
    std::vector<bool> table;

    for (int i = 0; i <= maxVal + 1; i++) {
        table.emplace_back(false);
    }
    table[0] = table[1] = true;
    
    for (int i = 2; i <= maxVal; i++) {
        for (int j = 2; i * j <= maxVal; j++) {
            if (table[i * j] == false) {
                table[i * j] = true;
            }
        }
    }

    // 소수끼리 모두 곱하여 LCM 계산하기
    // 이미 곱한 숫자와 같은 숫자가 다음에 있을 때, 이를 계산에서 제외한다.
    for (int i = 0; i <= maxVal; i++) {
        if (table[i] == false) {
            for (int j = 0; j < v.size(); j++) {
                if (v[j] == i) {
                    ret *= i;

                    // 중복 확인
                    table[i] = true;
                    break;
                }
            }
        }
    }

    // 1에서 update가 되지 않았다면 소수가 없는 것이므로 -1을 반환
    if (ret == 1) {
        return -1;
    }

    return ret;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n, input;
    int maxVal = -1;
    std::vector<int> v;

    std::cin >> n;
    if (n < 1 || n > 10000) {
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        std::cin >> input;
        if (input < 2 || input > 1000000) {
            return 0;
        }

        if (maxVal < input) {
            maxVal = input;
        }
        
        v.emplace_back(input);
    }

    std::cout << findLCM(v, maxVal) << "\n";

    return 0;
}