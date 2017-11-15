#include "StackNode.h"

class Stack {
    public:
        Stack() : head(NULL), size(0) {}
        ~Stack();
        
        bool isEmpty(StackNode *head) {
            return head == NULL;
        }
        
        void push(int d) {
            if (isEmpty(head)) {
                head = new StackNode(d, NULL); 
                return;
            }
            StackNode *newNode = new StackNode(d, head);
            head = newNode;
            size++;
        }
        
        void pop() {
            if (isEmpty(head))
                return;
            head = head -> next;
            size--;
        }
        
        int top() {
            if (isEmpty(head))
                return -1;
            return head -> data;
        }
        
        int getSize() {
            return size;
        }
        void print() {
            StackNode *temp = head;
            
            if (temp == NULL)
                cout << "Empty Stack\n";
        
            while (temp!= NULL) {
                cout << temp -> data << "\n";
                temp = temp -> next;
            }
        }
        
    private:
        StackNode *head;
        int size;
};