#include <iostream>

#define ARR_LENGTH 10000000
#define BUF_LENGTH 1000000
#define MAX_VAL    10000

int countArr[MAX_VAL + 1] = { 0,  };

int main() {
    std::cin.tie(NULL); 
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);

    int n, item;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> item;

        countArr[item]++;
    }
    
    // 4MB 제한 (int * 100만) 걸려 있으므로 별도의 배열에 저장하지 않고 바로 출력해야 함
    for (int i = 1; i <= MAX_VAL; i++) {
        if (countArr[i] > 0) {
            for (int j = 0; j < countArr[i]; j++) {
                std::cout << i << "\n";
            }
        }            
    }

    return 0;
}