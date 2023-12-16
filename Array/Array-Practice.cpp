// Q1]Given an array arr[] of integers. Find a peak element i.e. an element that is not smaller than its neighbors.
//  Note: For corner elements, we need to consider only one neighbor.
//  Example:
//  Input: array[]= {5, 10, 20, 15}
//  Output: 20
//  Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20

// #include <iostream>
// using namespace std;
// int peak(int size, int arr[])
// {

//     for (int i = 0; i < size - 2; i++)
//     {
//         if (arr[i] >= arr[i + 1])
//         {
//             cout << arr[i] << endl;
//         }
//     }
// }
// int main()
// {

//     int arr[10] = {12, 32, 45, 12, 34, 12, 45, 123, 56, 20};
//     int size = 10;
//     peak(size, arr);
// }

// -----------------------------------------****************************---------------------------

// Q2]Given an array, write functions to find the minimum and maximum elements in it.

// #include <iostream>
// using namespace std;
// int minmax(int arr[])
// {
//     for (int i = 0; i < 10; i++)
//     {

//         for (int j = i + 1; j < 10; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int k = 0; k < 10; k++)
//     {
//         cout << arr[k];
//         cout << " ";
//     }

//     cout << "The Min element from array is :" << arr[0] << endl;
//     cout << "The Max element from array is :" << arr[9];
// }
// int main()
// {
//     int arr[10] = {};
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter array elemtent to sort and Find it min and max Value";
//         cin >> arr[i];
//     }

//     minmax(arr);
// }

// Q3]Find Occurance of element X;

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     int occurance = 0;
//     int array[10] = {1, 2, 3, 4, 5, 1, 1, 2, 2, 3};
//     for (int i = 0; i < 10; i++)
//     {
//         if (x == array[i])
//         {
//             occurance++;
//             if (array[i]=9)
//             {

//             }

//         }

//     }
//     cout << occurance;
// }

// Q4] Rotate Array by one
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[5]={1,2,3,4,5};
//     int n=4;

//     // array[4]=array[3];
//     // array[3]=array[2];
//     // array[2]=array[1];
//     // array[1]=array[0];
//     // array[0]=5;
//     for (int i = 0; i < 5; i++)
//     {
//         array[n]=array[n-1];
//         if(n==0){
//             array[n]=5;
//         }
//         n--;

//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<array[i];
//     }

// }

// 5] Two array is given find it's union and intersextion
#include <iostream>
using namespace std;
int main()
{
    int arr0[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 2, 3, 4, 5};
    int dup[20] = {};
    int x = 0;

    for (int i = 0; i < 5; i++)
    {
        dup[i] = arr0[i];
        x++;
    }
    for (int i = 0; i < 5; i++)
    {
        dup[x + i] = arr1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << dup[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (dup[i] > dup[j])
            {
                int temp = dup[i];
                dup[i] = dup[j];
                dup[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        // cout << dup[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (dup[i] == dup[j])
            {
                cout << dup[i];
                continue;
            }
            else
            {
            }
        }
    }
}
