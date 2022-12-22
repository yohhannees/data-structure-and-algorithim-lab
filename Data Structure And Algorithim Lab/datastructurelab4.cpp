#include <iostream>
using namespace std;

struct node
{
    char name[10];
    node *nxt;
};

node p;

node *start_ptr = NULL;
node *current;

void add_node_at_the_end()
{

    node *temp, *temp2;
    temp = new node;
    cout << "enter name" << endl;
    cin >> temp->name;
    temp->nxt = NULL;

    if (start_ptr == NULL)
    {
        start_ptr = temp;
        current = start_ptr;
    }
    else
    {
        temp2 = start_ptr;

        while (temp2->nxt != NULL)
        {
            temp2 = temp2->nxt;
        }
        temp2->nxt = temp;
    }
}

void display_list()
{
    node *temp;
    temp = start_ptr;
    cout << endl;
    if (temp == NULL)
        cout << "The list is empty!" << endl;
    else
    {
        while (temp != NULL)
        {

            cout << "Name : " << temp->name << " ";
            if (temp == current)
                cout << " <-- Current node";
            cout << endl;
            temp = temp->nxt;
        }
        cout << "End of list!" << endl;
    }
}

void delete_start_node()
{
    node *temp;
    temp = start_ptr;
    start_ptr = start_ptr->nxt;
    delete temp;
}

void delete_end_node()
{
    node *temp1, *temp2;
    if (start_ptr == NULL)
        cout << "The list is empty!" << endl;
    else
    {
        temp1 = start_ptr;
        if (temp1->nxt == NULL)
        {
            delete temp1;
            start_ptr = NULL;
        }
        else
        {
            while (temp1->nxt != NULL)
            {
                temp2 = temp1;
                temp1 = temp1->nxt;
            }
            delete temp1;
            temp2->nxt = NULL;
        }
    }
}

void move_current_on()
{
    if (current->nxt == NULL)
        cout << "You are at the end of the list." << endl;
    else
        current = current->nxt;
}

void move_current_back()
{
    if (current == start_ptr)
        cout << "You are at the start of the list" << endl;
    else
    {
        node *previous; 
        previous = start_ptr;

        while (previous->nxt != current)
        {
            previous = previous->nxt;
        }
        current = previous;
    }
}
void add_in_middle()
{
    node *trav, *temp, *head;
    trav = start_ptr;
    while (trav != NULL)
    {
        if (strcmp(trav->name, "Abraham") == 0)

        {
            temp = new node;
            cout << "Please enter the name : ";
            cin >> temp->name;
            
            temp->nxt = NULL;
            break;
        }
        else
        {

            trav = trav->nxt;
        }
    }
    if (trav != NULL) // searched node found
    {
        temp->nxt = trav->nxt;
        trav->nxt = temp;
    }
}

int main()
{
    // deletion from the array
    // int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // int index;
    // cout << "enter the number index you want to delete" << endl;
    // cin >> index;

    // for (int i = index; i < 9; i++)
    // {
    //     num[i] = num[i + 1];
    // }

    // for (int i = 0; i < 9; i++)
    // {
    //     cout << num[i] << "  ";
    // }

    // insertion in to the array
    // int num[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int index;
    // cout << "enter the number index " << endl;
    // cin >> index;
    // cout << "enter the number value  you want to insert" << endl;
    // int value;
    // int temp;
    // cin >> value;
    // num[index] = value;
    // temp = num[index];

    // for (int i = 10; i > index - 1; i--)
    // {

    //     num[i + 1] = num[i];

    // }
    //   num[index + 1] = temp;
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << num[i] << "  ";
    // }

    // linked list

    return 0;
}