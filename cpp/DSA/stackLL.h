#include <bits/stdc++.h>
#include "singly_listNode.h"
using namespace std;

template <typename T>
class Stack
{
    listNode<T>* head;
    int size;

    public:
        Stack()
        {
            head = NULL;
            size = 0;
        }

        int getSize()
        {
            return size;
        }

        int isEmpty()
        {
            return size == 0;
        }

        T top()
        {
            if(head == nullptr)
            {
                cout << "Stack is empty." << endl;
                return -1;
            }
            return head->data;
        }

        void push(T val)
        {
            if(head == nullptr)
            {
                listNode<T> *tmp = new listNode<T>(val);
                head = tmp;
                size++;
                return;
            }
            listNode<T> *tmp = new listNode<T>(val);
            tmp->next = head;
            head = tmp;
            size++;
        }

        T pop()
        {
            if(isEmpty())
            {
                cout << "Stack is empty." << endl;
                return -1;
            }
            listNode<T> *tmp = head;
            head = head->next;
            tmp->next = nullptr;
            int x = tmp->data;
            delete tmp;
            size--;
            return x;
        }
};

