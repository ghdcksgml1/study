#include <iostream>
#include <algorithm>

int arr[1000];

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int n; std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i]; 
    }

    std::sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    return 0;
}