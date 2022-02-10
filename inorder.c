#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<windows.h>

struct node {
    struct node *left;
    char data;
    struct node *right;
};

struct node * buildtree (int);
void inorder (struct node *);

char arr[] = {'A','B','C','D','E','F'};
int Ic[]= {1,-1,3,4,-1,-1};
int rc[]= {2,-1,-1,5,-1,-1};

int main()
{
    struct node *root;

    system ("cls");

    root = buildtree (0);
    printf("in-order traversal:\n");
    inorder (root);

    return 0;
}

struct node * buildtree (int index)
{
    struct node *temp = NULL;
    if (index!= -1)
    {
        temp = (struct node *) malloc (sizeof (struct node ));
        temp -> left = buildtree (Ic[index]);
        temp -> data = arr[index];
        temp -> right = buildtree (rc[index]);
        
    }

    return temp ;
}

void inorder (struct node *root)
{
    if (root != NULL)
    {
        inorder (root -> left);
        printf("%c\t",root->data);
        inorder (root -> right);
    }
}