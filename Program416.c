#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    PNODE temp = *Root;
    if(*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        while(1)
        {
            if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(No == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed. \n");
                break;
            }
        }
    }


}
void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t",Root->data);
        Inorder(Root->rchild);
    }
}
void Preorder(PNODE Root)
{
    if(Root != NULL)
    {
        
        printf("%d\t",Root->data);
        Preorder(Root->lchild);
        Preorder(Root->rchild);
        
    }
}
void Postorder(PNODE Root)
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        printf("%d\t",Root->data);
        
        
    }
}
bool Search(PNODE Root, int No)
{
    while(Root != NULL)
    {
        if(Root->data == No)
        {
            break;
        }
        else if(No > Root->data)
        {
            Root = Root->rchild;
        }
        else if(No < Root->data)
        {
            Root = Root->lchild;
        }
    }
    if(Root == NULL)
    {
        return false;
    }
    else
    {
        return true;

    }

}
int CountLeafNodes(PNODE Root)
{
    static int iCount = 0;
    if(Root != NULL)
    {
    if((Root->lchild == NULL) && (Root->rchild == NULL))
    {
        iCount++;
    }
    CountLeafNodes(Root->lchild);
    CountLeafNodes(Root->rchild);
    }
    return iCount;

}
int CountParentNodes(PNODE Root)
{
    static int iCount = 0;
    if(Root != NULL)
    {
    if((Root->lchild != NULL) || (Root->rchild != NULL))
    {
        iCount++;
    }
    CountLeafNodes(Root->lchild);
    CountLeafNodes(Root->rchild);
    }
    return iCount;

}
int main()
{
   PNODE Head = NULL;
   bool bRet = false;
   int iRet = 0;

   Insert(&Head,11);
   Insert(&Head,7);
   Insert(&Head,21);


   printf("\nData using Preorder traversal\n");
   Preorder(Head);


   printf("\nData using Postorder traversal\n");
   Postorder(Head);


   printf("\nData using Inorder traversal\n");
   Inorder(Head);

   bRet = Search(Head,11);
   if(bRet == true)
   {
      printf("\nElements is there in BST\n");
   }
   else
   {
       printf("\nThere is no Element in BST\n");
   }
   
    iRet = CountLeafNodes(Head);
    printf("Count of Leaf Nodes is : %d\n",iRet);

     iRet = CountParentNodes(Head);
    printf("Count of Parent Nodes is : %d\n",iRet);


    return 0;
}