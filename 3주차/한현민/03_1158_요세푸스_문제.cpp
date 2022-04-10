#include <iostream>
#include <queue>

static std::queue<int> permQueue;
static std::queue<int> resultQueue;

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n, k, item;
    std::cin >> n >> k;
    if (n < 1 || n > 5000) return 0;
    if (k < 1 || k > 5000) return 0;
    if (n < k)             return 0;

    for (int i = 0; i < n; i++) {
        permQueue.push(i + 1);
    }

    // (7, 3) 순열을 예를 들자면,
    // 3 - 1 = 2 -> 2회 만큼 permQueue의 맨 앞 요소를 맨 뒤 요소 뒤에 옮긴다.
    // 그런 다음, 최종적인 permQueue의 맨 앞 요소를 다른 resultQueue에 저장한다.
    // 그리고 permQueue의 맨 앞 요소를 제거한다.
    // 이러한 과정을 n회 반복 시행한다.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k - 1; j++) {
            int temp = permQueue.front();
            permQueue.pop();
            permQueue.push(temp);
        }
        resultQueue.push(permQueue.front());
        permQueue.pop();
    }

    // resultQueue의 요소를 출력
    int queueSize = resultQueue.size();
    std::cout << "<";
    for (int i = 0; i < queueSize; i++) {
        if (i < queueSize - 1)
            std::cout << resultQueue.front() << ", ";
        else
            std::cout << resultQueue.front() << ">\n";
        resultQueue.pop();
    }

    return 0;
}