#include <iostream>
using namespace std;

class Stack {
    private: 
        int *stack;
        int p;
    public:
        Stack(int max = 100){
            stack = new int[max];
            p = 0;
        }
    Stack(){
        delete stack;
    }
    inline void push(int v) {
        stack[p++] = v;
    }
    inline int pop(){
        return stack[--p];
    }
    inline int empty(){
        return !p;
    }
};

int main(){
    char c;
    Stack acc(50);
    int x;
    while (cin.get(c)){
        x = 0;
        while (c ==' '){
            cin.get(c);
        }
        if(c == '+'){
            x = acc.pop() + acc.pop();
        }
        if(c == '*'){
            x = acc.pop() * acc.pop();
        }
        while(c>= '0' && c<='9'){
            x = 10*x + (c-'0');
            cin.get(c);
        }
        if(x!=0){
            acc.push(x);
        }
        
    }
    cout<<acc.pop()<<'\n';
}