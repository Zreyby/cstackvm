#include <iostream>
#include <vector>

using namespace std;

class VM{
    
    vector<int> stack;
    
public:     
    void push(int i){
        stack.push_back(i);
    }
    
    int pop(){
        int res = stack.back();   
        stack.pop_back();
        return res;
    }
    
    void sub(){
        push(pop() - pop());
    }
    void add(){
        push(pop() + pop());
    }
    void pr(){
        printf("%d", stack.back());
    }
};


int main(){
    VM vm;
    vm.push(3);
    vm.push(5);
    vm.add();
    vm.pr();

    printf("\nvm success worked\npress any key");
    cin.get();
}