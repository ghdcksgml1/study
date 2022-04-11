// 언어 : C++ , (성공/실패) : 1/0 , 메모리 : 2064kb , 시간 : 4ms

#include <iostream>

using namespace std;

int s;
int a[10001];

void push(int x) {
	a[s] = x;
	s++;
}

int pop() {
	if (s==0) return -1;
	int t = a[s - 1];
	s--;
	return t;
	
}

int size() {
	return s;
}

int empty() {
	if (s==0)
		return 1;
	else
		return 0;
}

int top() {
	if (s==0) return -1;
	return a[s - 1];
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string t; cin >> t;
		if (t == "push") {
			int n1;
			cin >> n1;
			push(n1);
		}
		if (t == "pop") {
			cout<< pop()<<"\n";
		}
		if (t == "size")
			cout << size() << "\n";
		if (t == "empty")
			cout << empty() << "\n";
		if (t == "top")
			cout << top() << "\n";
	}

	return 0;
}