#include <iostream>
using namespace std;

struct node
{
    int Data;
    node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = new NODE;
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while (Head != NULL)
    {
        if ((Head->Data % 2) == 0)
        {
            iSum += Head->Data;
        }
        Head = Head->Next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);
    cout << "Addition of even elements is: " << iRet << endl;

    return 0;
}
