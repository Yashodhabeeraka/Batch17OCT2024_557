#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}NODE;

NODE *createNode(int val)
{
    NODE *nn=(NODE *)malloc(sizeof(NODE));
    nn->data=val;
    nn->left=NULL;
    nn->right=NULL;
    
    return nn;
}

//insert Node
NODE *insertNode(NODE *root,int val)
{
    if(root == NULL)
    {
        //if the tree is empty
        //return nn
        return createNode(val);
    }
    if (root->data<val)
    {
        //right sub tree
        root->right=insertNode(root->right,val);
    }
    else if (root->data>val)
    {
        //left sub tree
        root->left=insertNode(root->left,val);
    }
    else
    {
        printf("\n %d duplicate value found. Hence ingnore\n",val);
    }
    return root;
}
void inOrdertraversal(NODE *root)
{
    if (root == NULL)
        return;
    
    inOrdertraversal(root->left);
    printf("%d ", root->data);
    inOrdertraversal(root->right);
}

void preOrderTraversal(NODE *root) 
{
    if (root == NULL)
        return;
    
    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(NODE *root) 
{
    if (root == NULL)
        return;
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ", root->data);
}

int main()
{
    NODE *root=NULL;
    
    root=insertNode(root,5);
    insertNode(root,10);
    insertNode(root,3);
    insertNode(root,4);
    insertNode(root,8);
    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,13);

    printf("In Order traversal\n");
    inOrdertraversal(root);
    printf("\n\n");
    
    printf("Pre Order traversal\n");
    preOrderTraversal(root);
    printf("\n\n");

    printf("Post Order traversal\n");
    postOrderTraversal(root);
    printf("\n\n");
    
    return 0;
}
