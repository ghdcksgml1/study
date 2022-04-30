#include <iostream>
#include <vector>

int findPrime(std::vector<int> v, int max) {
    std::vector<bool> table;  // numeric table
    int ret = 0;              // result

    for (int i = 0; i <= max; i++) {
        table.emplace_back(false);
    }
    table[0] = table[1] = true;

    for (int i = 2; i <= max; i++) {
        for (int j = 2; i * j <= max; j++) {
            if (table[i * j] == false) {
                table[i * j] = true;
            }
        }
    }

    // 테이블의 요소가 false일 떄, 해당 요소가 입력받은 배열의 요소 중에 있는지 확인한다.
    // 요소 안에 있다면 소수이므로 ret을 1 증가시킨다.
    for (int i = 0; i <= max; i++) {
        if (table[i] == false) {
            for (int j = 0; j < v.size(); j++) {
                if (v[j] == i) {
                    ret++;       
                }
            }
        }
    }

    return ret;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(NULL); std::cout.sync_with_stdio(NULL);

    int n;
    int max = -1;
    std::vector<int> v;

    std::cin >> n;
    if (n < 1 || n > 100) return 0;
    
    int input;
    for (int i = 0; i < n; i++) {
        std::cin >> input;
        if (input < 1 || input > 1000) return 0;
        v.emplace_back(input);
        if (max < v[i]) {
            max = v[i];
        }
    }

    int result = findPrime(v, max);

    std::cout << result << "\n";

    return 0;
}