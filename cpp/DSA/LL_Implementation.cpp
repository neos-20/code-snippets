# include <bits/stdc++.h>
# include "singly_listNode.h"
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

// Takes input and maintains an index.

listNode<int>* input(int & index)
{
    listNode<int>* head = nullptr;
    listNode<int>* tmp = nullptr;
    int a;
    cin >> a;
    while(a!=-1)
    {
        listNode<int>* node = new listNode<int>(a);
        index++;
        if(head == nullptr)
        {
            head = node;
            tmp = node;
        }
        else
        {
            tmp -> next = node;
            tmp = node;
        }
        cin >> a;
    }
    return head;
}

// Returns the mid-element of the ll.

listNode<int>* findMid(listNode<int>* &head) {
	  if(head == NULL) {
		  return head;
  	}

	  listNode<int>* slow = head;
    listNode<int>* speed = head;

	  while(speed -> next != NULL && speed -> next -> next != NULL) {
		  slow = slow -> next;
		  speed = speed -> next -> next;
	  }
	  return slow;
}

// Eliminates the duplicate elements.

void eliminateDuplicate(listNode<int>* &head, int &index)
{
    if(head == nullptr)
        return;

    listNode<int>* curr = head;
    listNode<int>* tmp = curr -> next;

    while(tmp != nullptr && curr != nullptr)
    {
        if(curr -> data == tmp -> data)
        {
            tmp = tmp -> next;
            index--;
        }
        else
        {
            curr -> next = tmp;
            tmp = tmp -> next;
            curr = curr -> next;
        }
    }
}

// Prints the number of times a particular element is present.

void find(listNode<int>* head, int key)
{
    int counter = 0;
    listNode<int>* tmp;
    for (tmp = head; tmp != nullptr; tmp = tmp->next)
    {
        if(tmp->data == key)
        {
            cout << counter++ << endl;
            return;
        }
        else
            counter++;
    }
    if(tmp == nullptr)
        cout << -1 << endl;
}

// Rearranges the ll as per the given index by the user.

void reagrr(listNode<int>* &head, int key, int index)
{
    if(head == nullptr)
        return;
    if(key > index)
    {
        cout << "Not enough node." << endl;
        return;
    }

    listNode<int>* tmp = head;

    for(int i = 0; i <= index; i++)
    {
        tmp = tmp -> next;
        if(i == index-1)
            tmp -> next = head;
    }
    for(int i = 0; i <= index-key; i++)
    {
        tmp = tmp -> next;
        if(i == index-key)
            head = tmp;
    }
}

// Prints the ll
// NOTE: - It uses index method.

void printlist(listNode<int>* head, int index)
{
    listNode<int>* tmp = head;
    for(int i = 0; i <= index; i++)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}

// Prints the ll in reverse.
// NOTE: - It uses index method.

void printReverse(listNode<int>* head, int index)
{
    listNode<int>* tmp = head;
    int counter = index;
    for(int i = 0; i <= index; i++)
    {
        counter--;
        for(int j = 0; j <= counter; j++)
        {
            tmp = tmp -> next;
        }
        cout << tmp ->data << " ";
        tmp = head;
    }
}

// Returns the data present at a particular index.

int atIndex(listNode<int>* head, int index)
{
    listNode<int>* tmp = head;
    for(int i = 0; i < index; i++)
    {
        tmp = tmp -> next;
    }
    return tmp -> data;
}

// Checks if the ll is palindrome.

bool checkPalin(listNode<int>* head, int end, int start = 0)
{
    if(end <= start)
        return true;
    if(atIndex(head, start) == atIndex(head, end) && checkPalin(head, end-1, start+1))
        return true;
    return false;
}

// Finds the node in the middle.

void midNode(listNode<int>* head, int index)
{
    if(head == nullptr)
        return;

    listNode<int>* tmp = head;
    for(int i = 0; i < index/2; i++)
    {
        tmp = tmp -> next;
    }
    cout << tmp->data;
}

// Merge two sorted ll in sorted manner.

listNode<int>* mergeSorted(listNode<int>* head1, listNode<int>* head2)
{
    if(head1 == nullptr && head2 == nullptr)
        return nullptr;

    listNode<int>* root = nullptr;

    if(head1->data <= head2->data)
    {
        root = new listNode<int>(head1->data);
        head1 = head1 -> next;
    }
    else
    {
        root = new listNode<int>(head2->data);
        head2 = head2->next;
    }

    listNode<int>* buffer = root;

    while(head1 && head2)
    {
        if(head1->data <= head2->data)
        {
            listNode<int>* tmp = new listNode<int>(head1->data);
            buffer -> next = tmp;
            buffer = buffer->next;
            head1 = head1->next;
        }
        else
        {
            listNode<int>* tmp = new listNode<int>(head2->data);
            buffer -> next = tmp;
            buffer = buffer->next;
            head2 = head2->next;

        }

    }
    while(head1)
    {
        listNode<int>* tmp = new listNode<int>(head1->data);
        buffer -> next = tmp;
        buffer = buffer->next;
        head1 = head1->next;

    }
    while(head2)
    {
        listNode<int>* tmp = new listNode<int>(head2->data);
        buffer -> next = tmp;
        buffer = buffer->next;
        head2 = head2->next;
    }
    return root;
}

// Sort ll using merge sort method.

listNode<int>* mergeSort(listNode<int>* head)
{
  	if(head == NULL || head -> next == NULL) {
	  	return head;
	  }
	  listNode<int> *mid = findMid(head);
  	listNode<int> *half1 = head;
  	listNode<int> *half2 = mid -> next;
  	mid -> next = NULL;
  	half1 = mergeSort(half1);
	  half2 = mergeSort(half2);

	  listNode<int> *finalHead = mergeSorted(half1, half2);
	  return finalHead;
}

// The main function.

int32_t main()
{
    /* fast; */
    int index1 = -1;
    /* int index2 = -1; */
    listNode<int>* head1 = input(index1);
    /* listNode<int>* head2 = input(index2); */
    /* int key; */
    /* cin >> key; */
    /* reagrr(head, key, index); */
    /* eliminateDuplicate(head, index); */
    /* printReverse(head, index); */
    /* cout << checkPalin(head, index); */
    /* printlist(head, index); */
    /* cout << endl; */
    /* cout << atIndex(head, 1) << " " << atIndex(head, index); */
    /* midNode(head, index); */
    /* listNode<int>* root = mergeSorted(head1, head2); */
    listNode<int>* root = mergeSort(head1);
    printlist(root, index1);
            
    }
    return 0;
}
