#include<iostream>
using namespace std;

class stack {
public:
    int arr[10] = {};
    int top;
};

stack s;

stack init() {
    s.top = -1;
    return s;
}
bool isEmpty() {
    if (s.top == -1) return true;
    else return false;
}

bool isFull() {
    if (s.top == 9) return true;
   else return false;
}

void push(int element) {
    if (!isFull()) {
        s.top++;
        s.arr[s.top] = element;
    }
    else {
        cout << "OVERFLOW"<<endl;
    }
}

int pop() {
    if (!isEmpty()) {
        int poppedElement = s.arr[s.top];
        s.top--;
        return poppedElement;
    }
    else {
        cout << "UNDERFLOW"<<endl;
        return 0;
    }
}

void display() {
    for (int i = s.top; i >= 0; i--) {
        cout << s.arr[i] << "\t";
    }
    cout << endl;
}

int peek() {
    return s.arr[s.top];
}

void StackOperations() {
    int operationnumber;
    while (true) {
        cout << "Enter the operation number you want to perform (pop->1, push->2, isEmpty->3, isFull->4, display->5, peek->6, exit->7):\n";
        cin >> operationnumber;
        if (operationnumber == 2) {
            int e;
            cout << "Enter the element you want to add to the stack: ";
            cin >> e;
            push(e);
        }
        else if (operationnumber == 1) {
            pop();
        }
        else if (operationnumber == 3) {
            if (isEmpty()) {
                cout << "TRUE\n";
            }
            else cout<<"FALSE"<<endl;
        }
        else if (operationnumber == 4) {
            if (isFull()) {
                cout << "TRUE\n";
            }
            else cout<<"FALSE"<<endl;
        }
        else if (operationnumber == 5) {
            display();
        }
        else if (operationnumber == 6) {
            cout << "Peek: " << peek() << endl;
        }
        else if (operationnumber == 7) {
            exit(0);
        }
        else {
            continue;
        }
    }
}

int main() {
    s = init();
    StackOperations();
}
