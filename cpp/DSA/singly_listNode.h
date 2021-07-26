template <typename T>

class listNode
{
public:
    T data;
    listNode<T>* next;
        listNode(T data)
        {
            this -> data = data;
            next = nullptr;
        }
};
