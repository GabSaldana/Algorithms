#include<bits/stdc++.h>

using namespace std;

class StackNode {
    public:
        StackNode(int data = 0, StackNode *next = NULL) : data(data), next(next) {}
        friend class Stack;
    private:
        int data;
        StackNode *next;
};