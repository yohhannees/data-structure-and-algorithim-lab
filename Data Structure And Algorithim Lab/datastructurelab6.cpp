#include<iostream>
using namespace std;



//binary search tree
struct node
{
    int key;
    node *left;
    node *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


struct node *insert(struct node *node, int key)
{

    if (node == NULL)
    {
        return newNode(key);
    }

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }
    return node;
}


struct node *deleteNode(struct node *node, int key)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (key < node->key)
    {
        node->left = deleteNode(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = deleteNode(node->right, key);
    }
    else
    {
        return deleteNode(node);
    }
    return node;
}
struct node *search(struct node *node, int key)
{
    if (node == NULL || node->key == key)
    {
        return node;
    }
    if (key < node->key)
    {
        return search(node->left, key);
    }
    else
    {
        return search(node->right, key);
    }
}

int main ()
{

return 0;

}
