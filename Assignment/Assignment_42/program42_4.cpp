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

int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);
    cout << "Maximum element is: " << iRet << endl;

    return 0;
}
