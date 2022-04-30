#include <iostream>
#include <vector>

std::vector<int> v;

int getPrime(std::vector<int> input, int k) {
    int ret = -1; // kth val
    int count = 0;

    std::vector<bool> table;
    for (int i = 0; i <= input.back(); i++) {
        table.emplace_back(false);
    }
    table[0] = table[1] = true;

    for (int i = 2; i <= input.back(); i++) {
        for (int j = 1; i * j <= input.back(); j++) {
            if (table[i * j] == false) {
                table[i * j] = true;
                ret = i * j;
                count++;
            }

            if (count >= k) {
                return ret;
            }
        }
    }

    return ret;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n, k;
    int maxVal = -1;
    int result;
    std::vector<int> inputV;

    std::cin >> n >> k;
    if (!(n > k && k >= 1) && n > 1000) {
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        inputV.emplace_back(i);
    }

    result = getPrime(inputV, k);

    std::cout << result << "\n";

    return 0;
}