#include <iostream>
#define MAX_STACK_SIZE 10

using namespace std;

void printError(const char* errorMessage) {
	cout << errorMessage << endl;
	exit(1);
}

// 스택 (배열로 구현)
template <typename T>
class ArrayStack {
private:
	int top;
	T data[MAX_STACK_SIZE];
public:
	ArrayStack() {
		top = -1;
	}
	~ArrayStack() {}

	void push(T data_) {
		if (isFull()) {
			printError("스택이 가득 찼습니다.");
		}
		data[++top] = data_;
	}

	T pop() {
		if (isEmpty()) {
			printError("스택이 비었습니다.");
		}
		return data[top--];
	}

	T peek() {
		if (isEmpty()) {
			printError("스택이 비었습니다.");
		}
		return data[top];
	}

	bool isEmpty() {
		return top == -1;
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	int size() {
		return top + 1;
	}
	void display() {
		for (int i = 0; i <= top; i++)
			cout << data[i] << ' ';
		cout << endl;
	}
};

int main() {
	ArrayStack<int> arrayStack;

	arrayStack.push(1);
	arrayStack.push(2);
	arrayStack.push(3);

	cout << arrayStack.peek() << endl;

	arrayStack.push(4);
	arrayStack.push(5);
	arrayStack.push(6);
	arrayStack.push(7);
	arrayStack.push(8);
	arrayStack.push(9);
	arrayStack.push(10);
	cout << arrayStack.isFull() << endl;

	arrayStack.display();

	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();

	arrayStack.display();

	cout << arrayStack.isEmpty() << endl;
	cout << arrayStack.isFull() << endl;

	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();
	arrayStack.pop();

	cout << arrayStack.isEmpty() << endl;
	arrayStack.display();

	return 0;
}