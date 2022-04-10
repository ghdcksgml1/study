#include <iostream>
#include <string>
#include <stack>

static std::stack<int> stack;

class Command {
private:
    std::string _opcode;
    int _operand;

    bool isEmpty() {
        if (stack.empty()) {
            std::cout << "-1\n"; 
        }

        return stack.empty();
    }

public:
    Command() {
        _opcode.clear();
        _operand = 100001;
    }
    
    Command(std::string opcode): Command() {
        _opcode = opcode;
    }

    Command(std::string opcode, int operand): Command(opcode) {
        _operand = operand;
    }

    void process() {
        if (_opcode.empty() || _operand > 100000) {
            return;
        }

        if (_opcode == "push") {
            stack.push(_operand);
            return;
        }

        if (_opcode == "pop") {
            if (isEmpty()) {
                return;
            }

            std::cout << stack.top() << "\n";
            stack.pop();
            return;
        }

        if (_opcode == "size") {
            std::cout << stack.size() << "\n";
            return;
        }

        if (_opcode == "empty") {
            std::cout << stack.empty() << "\n";
            return;
        }

        if (_opcode == "top") {
            if (isEmpty()) {
                return;
            }

            std::cout << stack.top() << "\n";
            return;
        }
    }
};

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n;
    std::cin >> n;
    if (n < 1 || n > 10000) return 0;

    std::string opcode; int operand;
    for (int i = 0; i < n; i++) {
        std::cin >> opcode; 
        if (opcode == "push") std::cin >> operand;
        
        Command *myComm = new Command(opcode, operand);
        myComm->process();
        delete myComm;
    }
}
