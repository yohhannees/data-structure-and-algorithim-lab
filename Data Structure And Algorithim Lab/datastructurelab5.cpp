#include <iostream>
#include <stdlib.h>
#include <climits>
using namespace std;

// binary search tree
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


void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        cout << " " << root->key;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << " " << root->key;
    }
}

// C function to search a given key in a given BST
struct node *search(struct node *root, int key)
{
    if (root == NULL || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}
// C function to find the minimum value in a given BST
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// C function to delete a given key from given BST
struct node *deleteNode(struct node *root, int key)
{

    if (root == NULL)
        return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL and root->right == NULL)
            return NULL;

        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
int main()
{

    struct node *root = NULL;

    root = insert(root, 20);
    insert(root, 40);
    insert(root, 10);
    insert(root, 17);
    insert(root, 30);
    insert(root, 40);
    insert(root, 7);

    cout << "Inorder traversal of the given tree" << endl;
    cout<<endl;
    inorder(root);
    cout << "Preorder traversal of the given tree" << endl;
    cout<<endl;
    preOrder(root);
    cout << "Postorder traversal of the given tree" << endl;
    cout<<endl;
    postOrder(root);

    return 0;
}