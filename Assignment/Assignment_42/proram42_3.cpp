#include<iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *Next;

    Node(int value)
    {
        Data = value;
        Next = NULL;
    }
};

class SinglyLL
{
private:
    Node *Head;

public:
    SinglyLL()
    {
        Head = NULL;
    }

    void InsertFirst(int no)
    {
        Node *newn = new Node(no);

        if (Head == NULL)
            Head = newn;
        else
        {
            newn->Next = Head;
            Head = newn;
        }
    }

    int Addition()
    {
        int iSum = 0;
        Node *temp = Head;

        while (temp != NULL)
        {
            iSum = iSum + temp->Data;
            temp = temp->Next;
        }
        return iSum;
    }
};

int main()
{
    SinglyLL obj;

    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout << "Addition of elements is: " << obj.Addition() << endl;

    return 0;
}
