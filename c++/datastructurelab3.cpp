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
void merge_sort(int *num, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[n1], m[n2];
    for (int i = 0; i < n1; i++)
    {
        l[i] = num[p + 1];
    }

    for (int j = 0; j < n2; j++)
    {
        m[j] = num[q + 1 + j];
    }

    int i, j, k;

    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (l[i] <= m[j])
        {
            num[k] = l[i];
            i++;
        }
        else
        {
            num[k] = m[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        num[k] = l[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        num[k] = m[j];
        j++;
        k++;
    }
}

int main()

{

    // int num[] = {1, 3, 2, 4, 7, 6, 5, 8, 10, 9};

    // insertion_sort(num, 10);
    // cout << "the answer for insertion_sort" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << num[i] << endl;
    // }
    // cout << "the answer for bubble_sort" << endl;
    // bubble_sort(num, 10);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << num[i] << endl;
    // }
    cout << "the answer for bubble_sort" << endl;
    

    return 0;
}