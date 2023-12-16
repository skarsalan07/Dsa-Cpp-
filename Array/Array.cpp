#include <iostream>

using namespace std;

int main()
{
    // 1] initialize array at Compile time and address calculated
    // int array[3] = {
    //     1,
    //     2,
    //     3};

    // cout << &array[0] << endl;
    // // Base address+index+size of datatype
    // cout << &array[0] + array[2] * 4 << endl;
    // // 0x61ff34
    // cout << &array[2] << endl;
    // cout << array[2] << endl;

    // // initialize array at Run time
    // int arr[5] = {};

    // for (int j = 0; j < 5; j++)
    // {
    //     cout << "Enter array values to store" << endl;
    //     cin >> arr[j];
    // }
    // // 2] traversal of an array
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }
    // // 3] insert element at specific position with overwrite in an array
    // {
    //     int change1;
    //     int index;
    //     cout << "Enter index no and value which you want to be execute";
    //     cin >> index >> change1;
    //     arr[index] = change1;
    //     cout << "At index :" << index << "Value is :" << change1 << endl;
    //     cout << arr[1];
    // }

    // // 3] insert element at specific position without overwrite in an array
    // {
    //     int array1[6] = {1, 2, 3, 4, 5};
    //     int index12 = 6;
    //     int size = 6;
    //     for (int i = 0; i < size; i++)
    //     {
    //         array1[index12 - 1] == array1[index12 - 2];
    //         if (index12 == 2)
    //         {
    //             array1[index12] = 10;
    //             break;
    //         }

    //         index12--;
    //     }
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << array[i] << endl;
    //         /* code */
    //     }
    // }

    // // second way to insert element without overright file...With swipping elemets

    // {
    //     int arrayA[3] = {1, 2, 3};
    //     int change = arrayA[2];
    //     int change12 = arrayA[0];
    //     arrayA[0] = change;
    //     arrayA[2] = change12;

    //     cout << arrayA[0];
    //     cout << arrayA[1];
    //     cout << arrayA[2];
    // }

    // 4]delete element for array by overwriting on it
    // int del[5] = {10, 20, 30, 40, 50};
    // int position, y, size = 5;
    // cin >> position;

    // if (position < 0 || position > size)
    // {
    //     cout << "Enter valid range position";
    // }
    // else
    // {
    //     for (y = position-1 ; y < size - 1; y++)
    //     {
    //         if(y==position-1){

    //     }

    //         del[y] = del[y + 1];

    //     }

    //     size--;
    //     for (y = 0; y < size; y++)
    //     {

    //         cout << del[y] << endl;
    //     }
    // }

    // deleting all atoms from aray
    // int delall[6] = {1, 2, 3, 4, 5};
    // int size = 6;
    // for (int i = 0; i < size - 1; i++)
    // {
    //     delall[i] = delall[i + 1];
    // }
    // size--;

    // for (int i = 0; i < size - 1; i++)
    // {
    //     cout << delall[i];
    // }
    // size--;

    // shortcut method for delete atom from array
    // del[position] = del[size - 1];
    // for (int i = 0; i < size - 1; i++)
    // {
    //     cout << del[i]<<endl;
    // }

    // 5]Searching in array
    // int array[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109};
    // int size = 10;
    // int found;
    // cout << "Enter element which you want to search" << endl;
    // cin >> found;
    // int condition = 1;

    // for (int i = 0; i < size; i++)
    // {
    //     if (array[i] == found)
    //     {
    //         cout << "Value find!!!" << endl;
    //         cout << "At index : " << i << endl;
    //         cout << "Value is :" << array[i];
    //         condition = 0;

    //         break;
    //     }
    // }
    // if(condition==1){
    //     cout<<"Value :"<<found<<" is not found";
    // }

    // 6]Array with pointer
    // int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *pointer = arr;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i[pointer] << endl;
    // }

    // 7] 2D array
    // int arr[3][3];
    // cout << "Enter the values of 2d array";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    //  2D array with pointer;
    int _2darray[2][2] = {1, 2,
                          3, 4};
    int *pointer;
    pointer = &_2darray[0][0];
    cout << pointer<<endl;
    cout << _2darray+1<<endl;
    cout<<&_2darray[1][0]<<endl;

}