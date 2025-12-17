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
        {
            Head = newn;
        }
        else
        {
            newn->Next = Head;
            Head = newn;
        }
    }

    int SearchLastOcc(int no)
    {
        Node *temp = Head;
        int iPos = 1;
        int iLast = -1;

        while (temp != NULL)
        {
            if (temp->Data == no)
            {
                iLast = iPos;
            }
            temp = temp->Next;
            iPos++;
        }
        return iLast;
    }

    void Display()
    {
        Node *temp = Head;
        while (temp != NULL)
        {
            cout << "|" << temp->Data << "|->";
            temp = temp->Next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    SinglyLL obj;

    obj.InsertFirst(70);
    obj.InsertFirst(30);
    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    obj.Display();

    cout << "Last Occurrence of 30 is at position: " << obj.SearchLastOcc(30) << endl;

    return 0;
}
