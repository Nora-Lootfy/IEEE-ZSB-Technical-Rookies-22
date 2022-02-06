#include <iostream>
#include <cstddef>
#include <string>
using namespace std;

template <class T>

class LinkedList
{
private:
    struct Node
    {
        T data;
        Node *next;
    };
    Node *start;
    Node *end;
    int size;

public:
    // insertion, deletion, count number of occurance using recursion
    LinkedList() : start(NULL), end(NULL), size(0) {}

    bool isEmpty()
    {
        return start == NULL;
    }

    void insertAtStart(T item)
    {
        Node *temp = new Node;
        temp->data = item;

        if (start == NULL)
        {
            start = end = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = start;
            start = temp;
        }

        size++;
    }

    void insert(T item)
    {
        // insert item at the end of the list

        Node *temp = new Node;
        temp->data = item;
        temp->next = NULL;

        if (start == NULL)
            start = end = temp;
        else
        {
            end->next = temp;
            end = temp;
        }

        size++;
    }

    void insert(T item, int index)
    {
        // insert at any position

        if (index > size)
            cout << "Insertion in place out of the size of the list :=" << endl;
        else
        {
            if (index == size) // insert at the end of list
                insert(item);
            else if (index == 0) // insert at the begining of the list
                insertAtStart(item);
            else
            {
                Node *temp = new Node;
                temp->data = item;

                Node *ptr = start;
                for (int i = 0; i < index - 1; i++)
                {
                    ptr = ptr->next;
                }
                temp->next = ptr->next;
                ptr->next = temp;
                size++;
            }
        }
    }

    void deleteItem()
    {
        if (isEmpty())
            cout << "Can't delete from Empty List" << endl;
        else
        {
            Node *ptr = start;
            for (int i = 0; i < size - 1; i++)
            {
                ptr = ptr->next;
            }
            cout << "item " << end->data << " is successfully deleted" << endl;
            end = ptr;
            size--;
        }
    }

    void deleteItem(int index)
    {
        if (isEmpty())
            cout << "Can't delete from Empty List" << endl;
        else
        {
            Node *ptr = start;
            for (int i = 0; i < index - 1; i++)
            {
                ptr = ptr->next;
            }
            cout << "item " << ptr->next->data << " is successfully deleted" << endl;
            ptr->next = ptr->next->next;
            size--;
        }
    }

    void printList()
    {
        Node *ptr = start;
        cout << "[ ";
        for (int i = 0; i < size; i++)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << "]" << endl;
    }

    int countNumberOfOccurance(T item, int value) // the variable value is to specify the value of temprory pointer
    {
        static Node *tempPtr;
        if (value == 0)
            tempPtr = start;

        if (tempPtr->next != NULL)
        {
            tempPtr = tempPtr->next;
            return ((item == tempPtr->data) ? 1 : 0) + countNumberOfOccurance(item, 1);
        }

        return 0;
    }
};

int main()
{

    LinkedList<int> list;

    list.insert(15);
    list.insert(15);
    list.insert(15);
    list.insert(15);
    list.insert(1, 0);
    list.insert(12);
    list.insert(13);
    list.insert(14);
    list.insert(20, 3);
    list.insert(21, 2);
    list.printList();
    list.deleteItem();
    list.printList();
    list.deleteItem(1);
    list.printList();
    list.insert(12);
    list.insert(13);
    list.insert(14);
    cout << "number of occurance of 15 = " << list.countNumberOfOccurance(15, 0) << endl;
    list.insert(20, 3);
    list.insert(21, 2);
    list.printList();
    cout << "number of occurance of 13 = " << list.countNumberOfOccurance(13, 0) << endl;

    return 0;
}