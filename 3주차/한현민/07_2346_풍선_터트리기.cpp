#include <iostream>
#include <vector>
#include <queue>

#define LEFT  0
#define RIGHT 1

class Balloon {
private:
    int _index;
    int _nextNumber;
    bool _isBlown;

public:
    Balloon(int index, int nextNumber) {
        _index = index;
        _nextNumber = nextNumber;
        _isBlown = false;
    }

    int getIndex() {
        return _index;
    }

    int getNextNumber() {
        if (!_isBlown)
            _isBlown = true;

        return _nextNumber;
    }

    bool getIsBlown() {
        return _isBlown;
    }
};

static std::vector<Balloon> balloonArr;
static std::queue<int> balloonResultQueue;

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n;
    std::cin >> n;
    if (n < 1 || n > 1000) return 0;
        
    int nextNumber = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> nextNumber;
        if (nextNumber == 0) return 0;
        balloonArr.emplace_back(Balloon(i + 1, nextNumber));
    }

    // Remark : Balloon이 가진 속성들
    // 1) 이동 거리 -> 현재 인덱스에서 +, - -> 최저 인덱스 또는 최고 인덱스를 넘어설 경우를 고려해야 함
    //      - 최저 인덱스에서 한 칸 왼쪽으로 가면 최고 인덱스로 넘어가야 함
    //      - 최고 인덱스에서 한 칸 오른쪽으로 가면 최저 인덱스로 넘어가야 함
    // 2) 풍선이 터졌는지 여부를 확인하는 플래그 -> 터진 풍선 여부를 확인하고, 터진 풍선이면 이동 거리를 차감하지 않음
    int currentNumber = 0;
    nextNumber = balloonArr[currentNumber].getNextNumber();
    balloonResultQueue.push(balloonArr[currentNumber].getIndex());

    bool direction; // 0은 왼쪽방향, 1은 오른쪽방향을 의미함
    if (nextNumber < 0) {
        direction = LEFT;
    } else if (nextNumber > 0) {
        direction = RIGHT;
    }

    // for문 앞에서 한 번 돌렸으므로 반복문의 종료 조건은 i < n 대신에 i < n - 1
    for (int i = 0; i < n - 1; i++) {
        if (nextNumber < 0) {
            direction = LEFT;
        } else if (nextNumber > 0) {
            direction = RIGHT;
        }
        
        // 터진 풍선이 없을 때까지 한쪽 방향으로 계속 이동
        // currentNumber가 음수였다면 왼쪽으로, 양수였다면 오른쪽으로 이동한다.
        for (int j = 0; j < abs(nextNumber); j++) {
            if (direction == LEFT) {
                currentNumber--;

                if (currentNumber < 0) {
                    currentNumber = balloonArr.size() + currentNumber;
                }

                if (balloonArr[currentNumber].getIsBlown()) {
                    j--;
                    continue;
                }
            }

            if (direction == RIGHT) {
                currentNumber++;

                if (currentNumber > balloonArr.size() - 1) {
                    currentNumber = currentNumber - balloonArr.size();
                }
                
                if (balloonArr[currentNumber].getIsBlown()) {
                    j--;
                    continue;
                }
            }
        }        

        // 도착한 인덱스 값을 Queue에 저장
        balloonResultQueue.push(balloonArr[currentNumber].getIndex());

        // 다음에 이동할 값 갱신
        nextNumber = balloonArr[currentNumber].getNextNumber();
    }

    for (int i = 0; i < n; i++) {
        std::cout << balloonResultQueue.front() << " ";
        balloonResultQueue.pop();
    }

    std::cout << "\n";

    return 0;
}