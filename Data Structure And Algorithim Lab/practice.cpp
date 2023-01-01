#include <iostream>
using namespace std;

// linear search for an array

// int linear_search(int arr[], int n, int key)
// {
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {

//         index = i;
//         if (arr[i] == key)
//         {
//             cout << i;
//             break;
//         }
//         else
//         {
//             return index;
//         }
//     }
//     return index;
// }

// binary search
// int binary_search(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             return  mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }

// simple sorting algorithm
void simple_sorting(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j = n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{

    int arr[] = {1, 4, 3, 2, 5, 8, 7, 6, 10, 9};
    int n = sizeof(arr);
    // cout << "enter the key to be searched" << endl;
    // int key;
    // cin >> key;
    // linear_search(arr, n, key);
    // binary_search(arr, n, key);
    simple_sorting(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}