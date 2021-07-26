#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
    T* data;
    int nextIndex;
    int capacity;

public:
    Stack(int max = 5)
    {
        data = new T[max];
        nextIndex = 0;
        capacity = max;
    }

// Returns the total number of elemets present.

    int size()
    {
        return nextIndex;        
    }

// Returns T/F corresponding to if the stack is empty or not.

    bool isEmpty()
    {
        return nextIndex == 0;        
    }

// Returns the topmost element.

    T top()
    {
        if(isEmpty())
            return 0;
        return data[nextIndex];        
    }

// Inserts new element.

    void push(int a)
    {
        if(nextIndex == capacity)
        {
            T *newData = new T[2*capacity];
            
            for (size_t i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }

            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = a;
        nextIndex++;
    }

// Removes and returns the topmost element.

    T pop()
    {
        if(isEmpty())
        {
            cout << "Stack Empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
};
