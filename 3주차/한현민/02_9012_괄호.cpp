#include <iostream>
#include <string>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n, count;
    std::string input;
    std::cin >> n;
    if (n < 1) return 0;

    for (int i = 0; i < n; i++) {
        count = 0;
        std::cin >> input;

        if (input.length() < 2 || input.length() > 50) {
            return 0;
        }
        for (char item: input) {
            if (!(item == '(' || item == ')')) {
                return 0;
            }

            if (item == '(') {
                count++;
            } else {
                count--;

                if (count < 0) {
                    break;
                }
            }
        }

        if (count == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}