#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    int data;
    struct tnode *leftc;
    struct tnode *rightc;
};
int main()
{
    char ans='N';
    struct tnode *new_node,*root;
    //  struct tnode *get_node();
    root=NULL;
    do{
        // new_node=get_node();
        printf("\nEnter the Element");
        scanf("%d",&new_node->data);
        if(root==NULL)
            root=new_node;
        else
            insert(root,new_node);
        printf("\nDo you want to enter a new element?(y/n)");
        scanf("%c",&ans);
    }while(ans == 'y');
    printf("Inorder traversal:the elements in the tree are");
    inorder(root);
    printf("\nPreorder traversal:the elements in the tree are");
    preorder(root);
    printf("Postorder traversal:the elements in the tree are");
    postorder(root);
    return 0;
}
void insert(struct tnode ** tree,int num)
{
    struct tnode *temp = NULL;
    if(!(*tree))
    {
        temp=(struct tnode *)malloc(sizeof (struct tnode));
        temp->leftc=temp->rightc=NULL;
        temp->data=num;
        *tree=temp;
        return;
    }
    if(num < (*tree)->data)
    {
        insert(&(*tree)->leftc,num);
    }
    else if(num > (*tree)->data)
    {
        insert(&(*tree)->rightc,num);
    }
}
void preorder(struct tnode * s)
{
    if(s)
    {
        printf("%d\n",s->data);
        preorder(s->leftc);
        preorder(s->rightc);
    }
}
void inorder(struct tnode * s)
{
    if(s)
    {
        inorder(s->leftc);
        printf("%d\n",s->data);
        inorder(s->rightc);
    }
}
void postorder(struct tnode * s)
{
    if(s)
    {
        postorder(s->leftc);
        postorder(s->rightc);
        printf("%d\n",s->data);
    }
}
