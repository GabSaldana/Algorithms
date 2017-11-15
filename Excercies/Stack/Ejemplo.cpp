#include "Stack.h"

int main() {
    Stack *S = new Stack();
    
    S -> push(10);
    S -> push(1);
    S -> push(22);
    
    S -> print();
    
    S -> push(11);
    
    cout << "\n";
    
    S -> print();
    
    return 0;
    
}
