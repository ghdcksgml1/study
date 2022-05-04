#include <iostream>

int findSquare(int64_t min, int64_t max) {
    int amount = 0;
    int isSquare;

    for (int i = min; i <= max; i++) {
        isSquare = 0;

        // 제곱수가 2 이상이므로 1부터 3까지는 항상 제곱 ㄴㄴ수가 됨
        if (i >= 1 && i <= 3) {
            amount++;
            continue;
        }

        // 4부터
        for (int j = 2; j * j <= max; j++) {
            if (i < j * j) {
                break;
            } else if (i % (j * j) == 0) {
                isSquare = 1;
                break;
            }
        }

        if (!isSquare) {
            amount++;
        }
    }

    return amount;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int64_t min, max;
    std::cin >> min >> max;

    std::cout << findSquare(min, max) << "\n";

    return 0;
}