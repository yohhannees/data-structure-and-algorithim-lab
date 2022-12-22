#include <iostream>
using namespace std;
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
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index;
    cout << "enter the number index " << endl;
    cin >> index;
    cout << "enter the number value  you want to insert" << endl;
    int value;
    int temp;
    cin >> value;

    temp = num[index];
    num[index] = value;
    for (int i = 10; i > index - 1; i--)
    {

        num[i + 1] = num[i];
    }

    num[index + 1] = temp;

    for (int i = 0; i < 11; i++)
    {
        cout << num[i] << "  ";
    }

    return 0;
}