#include <iostream>
using namespace std;
void insertion_sort(int *num, int arraysize)
{
    int i;
    int key;
    int j;

    for (int i = 0; i < arraysize; i++)
    {
        key = num[i];
        j = i - 1;
        while (j >= 0 && num[j] > key)
        {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = key;
    }
}
void bubble_sort(int *num, int arraysize)
{
    for (int i = 0; i < arraysize; i++)
        for (int j = 0; j < 9; j++)
        {
            if (num[i] + 1 < num[j])
            {
                swap(num[j + 1], num[j]);
            }
        }
}
merge_sort
int main()

{

    int num[] = {1, 3, 2, 4, 7, 6, 5, 8, 10, 9};

    insertion_sort(num, 10);
    cout << "the answer for insertion_sort" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << endl;
    }
    cout << "the answer for bubble_sort" << endl;
    bubble_sort(num, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}