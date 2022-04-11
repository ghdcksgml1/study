#include <iostream>
#include <queue>
#include <string>
#include <list>

static std::list<std::string> opcodeList = 
    { "push", "front", "back", "size", "empty", "pop" };

static std::queue<int> queue;

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
        if (queue.empty()) {
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

        if (_opcode == "push") {
            queue.push(_operand);
        }

        if (_opcode == "empty") {
            std::cout << queue.empty();
        }

        if (_opcode == "front") {
            if (!emptyCheck()) {
                std::cout << queue.front();
            }
        }

        if (_opcode == "back") {
            if (!emptyCheck()) {
                std::cout << queue.back();
            }
        }

        if (_opcode == "size") {
            std::cout << queue.size();
        }

        if (_opcode == "pop") {
            if (!emptyCheck()) {
                std::cout << queue.front();
                queue.pop();   
            }
        }

        if (_opcode != "push") std::cout << "\n";
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
        if (opcode == "push") {
            std::cin >> operand;
            if (operand < 1 || operand > 100000) return 0;
        }

        Command *myComm = new Command(opcode, operand);
        myComm->process();

        delete myComm;
    }

    return 0;
}