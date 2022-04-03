#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> arr;

bool ascent(int a, int b) {
    return a > b;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    std::string n;

    std::cin >> n;

    if (n.length() == 1) {
        if (n[0] - '0' == 0) {
            return 0;
        }
    }

    if (n.length() > 10) {
        return 0;
    } else if (n.length() == 10) {
        if (n[0] - '0' != 1) {
            return 0;
        }

        for (int i = 1; i < n.length(); i++) {
            if (n[i] - '0' != 0) {
                return 0;
            }
        }
    }

    // 각 자리수가 0~9의 값인지 확인하고 arr에 저장
    for (int i = 0; i < n.length(); i++) {
        if (!isdigit(n[i])) {
            return 0;
        }
        
        if (n[i] - '0' >= 0 && n[i] - '0' < 10) {
            arr.emplace_back(n[i] - '0');
        }
    }

    std::sort(arr.begin(), arr.end(), ascent);

    for (int num: arr) {
        std::cout << num;
    }

    std::cout << "\n";

    return 0;
}