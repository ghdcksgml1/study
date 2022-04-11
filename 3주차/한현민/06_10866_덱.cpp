#include <iostream>
#include <deque>
#include <string>
#include <list>

static std::list<std::string> opcodeList = 
    { "push_front", "push_back", "pop_front", "pop_back",
      "size", "empty", "front", "back" };

static std::deque<int> deque;

class Command {
private:
    std::string _opcode;
    int _operand;

    bool check() {
        for (std::string item: opcodeList) {
            if (_opcode == item) {
                return true;
            }
        }

        return false;
    }

    bool emptyCheck() {
        if (deque.empty()) {
            std::cout << -1;
            return true;
        }
        return false;
    }


public:
    Command(std::string opcode) {
        _opcode = opcode;
    }

    Command(std::string opcode, int operand): Command(opcode) {
        _operand = operand;
    }

    void process() {
        if (!check()) return;

        if (_opcode == "push_front") {
            deque.push_front(_operand);
        }

        if (_opcode == "push_back") {
            deque.push_back(_operand);
        }

        if (_opcode == "pop_front") {
            if (!emptyCheck()) {
                std::cout << deque.front();
                deque.pop_front();   
            }
        }

        if (_opcode == "pop_back") {
            if (!emptyCheck()) {
                std::cout << deque.back();
                deque.pop_back();
            }
        }

        if (_opcode == "size") {
            std::cout << deque.size();
        }

        if (_opcode == "empty") {
            std::cout << deque.empty();
        }

        if (_opcode == "front") {
            if (!emptyCheck()) {
                std::cout << deque.front();
            }
        }

        if (_opcode == "back") {
            if (!emptyCheck()) {
                std::cout << deque.back();
            }
        }        

        if (_opcode != "push_front" &&
            _opcode != "push_back")
                std::cout << "\n";
    }
};

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n;
    std::cin >> n;
    if (n < 1 || n > 10000) return 0;

    std::string opcode;
    int operand;
    for (int i = 0; i < n; i++) {
        opcode = "";
        operand = 0;

        std::cin >> opcode;
        if (opcode == "push_front" || opcode == "push_back") {
            std::cin >> operand;
            if (operand < 1 || operand > 100000) {
                return 0;
            }
        }

        Command *myComm = new Command(opcode, operand);
        myComm->process();

        delete myComm;
    }

    return 0;
}