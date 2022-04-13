// 언어 : C++, (성공 / 실패) : 1 / 3, 메모리 : 2024kb, 시간 : 336ms

#include <iostream>

using namespace std;

struct Queue {
    int data[10000]; // 입력의 조건을 보고 충분한 크기로 해줘야 채점시 런타임에러가 발생하지 않는다.
    int begin, end;

    // 멤버변수를 초기화 해주는 생성자(필수)
    Queue() {
        begin = 0;
        end = 0;
    }

    void push(int num)
    {
        data[end] = num;
        end += 1;
    }

    int pop()
    {
        if (empty())
            return -1;
        else
        {
            begin += 1;
            return data[begin - 1];
        }
    }

    int size()
    {
        return end - begin;
    }

    bool empty()
    {
        return (size() == 0) ? 1 : 0;
    }

    int front()
    {
        if (empty())
            return -1;
        else
            return data[begin];
    }

    int back()
    {
        if (empty())
            return -1;
        else
            return data[end - 1];
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    Queue q;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int num;
            cin >> num;
            q.push(num);
        }

        else if (cmd == "pop")
        {
            cout << q.pop() << endl;
        }

        else if (cmd == "size")
        {
            cout << q.size() << endl;
        }

        else if (cmd == "empty")
        {
            cout << q.empty() << endl;
        }

        else if (cmd == "front")
        {
            cout << q.front() << endl;
        }

        else if (cmd == "back")
        {
            cout << q.back() << endl;
        }
    }
}
