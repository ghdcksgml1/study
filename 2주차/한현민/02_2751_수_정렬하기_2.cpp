#include <cstdio>
#include <algorithm>

#define MAX_N 1000000

int arr[MAX_N];

int main() {
    int n, item;

    scanf("%d", &n);

    if (n < 1 || n > MAX_N) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }    

    std::sort(arr, arr + n); // O(nlogn)

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
} 