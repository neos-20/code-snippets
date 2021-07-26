#include <vector>
using namespace std;

template <typename T>
class treeNode {
    public:
    T data;
    vector<treeNode*> children;

    treeNode(T data)
    {
        this->data = data;
    }
    ~treeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
