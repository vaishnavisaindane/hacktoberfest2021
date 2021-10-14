// node_count_in_bst program in C language
#include<stdio.h>
#include<stdlib.h>

// function declaration statements
struct node* node_create();
void countOfNode(struct node*);

// defining a datatype of type struct node which contains three fields data, left pointer and right pointer
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root;
int count=0;

void main()
{
    // calling node creation function
    struct node *root = node_create();
    // calling node count function
    countOfNode(root);
    // printing result based on the updated value of count variable
    if(count==0){
        printf("There are no nodes in BST.");
    }else if(count==1){
        printf("There is %d node in BST.", count);
    }else{
        printf("There are %d nodes in BST.", count);
    }
}

//f unction definitions
struct node* node_create()
{
    int val;

    // dynamically creating new node using malloc() function
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d", &val);

    // if value entered is 0 then it will return to its previous parent node
    if(val == 0)
        return NULL;
        
    new_node->data = val;

    printf("\nEnter left child for %d [0 for no node]:", val);
    new_node->left = node_create();

    printf("\nEnter right child for %d [0 for no node]:", val);
    new_node->right = node_create();

    return new_node;
}

void countOfNode(struct node* rt)
{
    if(rt == NULL)
        return;
    ++count;
    // recursive function call to itself
    countOfNode(rt->left);
    countOfNode(rt->right);
}
