#include <iostream>
#include <vector>

std::vector<int> v;

void findPrime(int N) {
    std::vector<bool> table;
    for (int i = 0; i < N + 1; i++) {
        table.emplace_back(true);
    }
    table[0] = table[1] = false;

    for (int i = 2; i < N + 1; i++) {
        for (int j = 2; i * j < N + 1; j++) {
            if (table[i * j] == true) {
                table[i * j] = false;
            }
        }
    }

    for (int i = 0; i < N + 1; i++) {
        if (table[i] == true) {
            v.emplace_back(i);
        }
    }
}

int findSumCases(int N) {
    int sum, cases = 0;

    for (int i = 0; i < v.size(); i++) {
        sum = 0;

        for (int j = i; j < v.size(); j++) {
            sum += v[j];
            if (sum == N) {
                cases++;
                break;
            } else if (sum > N) {
                break;
            }
        }
    }
    
    return cases;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int N;
    std::cin >> N;
    if (N < 1 || N > 4000000) return 0;

    findPrime(N);

    std::cout << findSumCases(N) << "\n";

    return 0;
}