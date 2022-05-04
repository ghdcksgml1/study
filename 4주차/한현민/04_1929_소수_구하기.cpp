#include <iostream>
#include <vector>

std::vector<int> v;

void findPrime(int M, int N) {
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

    for (int i = M; i < N + 1; i++) {
        if (table[i] == true) {
            v.emplace_back(i);
        }
    }
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int M, N;
    std::cin >> M >> N;
    if (M < 1) return 0;
    if (N < M || N > 1000000) return 0;

    findPrime(M, N);

    for (int item: v) {
        std::cout << item << "\n";
    }

    return 0;
}