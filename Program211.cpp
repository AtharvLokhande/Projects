#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;
        
        // Behaviours
        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

/*
Retturn_Value Class_Name :: Function_name(parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;

    //Step2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    // Step3 : Ckeck if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else    // IF LL Contains atleast one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}
void SinglyLL :: InsertLast(int no)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;

    //Step2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    // Step3 : Ckeck if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else    // IF LL Contains atleast one node
    {

    }
}
void SinglyLL :: InsertAtPosition(int,int ipos)
{

}
void SinglyLL :: DeleteFirst()
{

}
void SinglyLL :: DeleteLast()
{

}
void SinglyLL :: DeleteAtPosition(int ipos)
{

}
void SinglyLL :: Display()
{
    cout<<"Elements of Linked LIst are :"<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp ->next;
    }
    cout<<"NULL"<<"\n";
}

int main()
{
    SinglyLL obj1;
    
    cout<<sizeof(obj1)<<"\n";
    cout<<"First poiner contains :"<<obj1.First<<"\n";
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";
/*
    obj1.InsertLast(101);
    obj1.InsertLast(11);
    obj1.InsertLast(121);

    obj1.Display();

    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";
*/
    return 0;
}
