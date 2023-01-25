#include <iostream>

int main()
{
    const int N = 5;
    int arr[N] = { 8,9,3,4,7 };

    

  /*  int count_marks = 5;
    int indx_insert = 2;
    for (int i = count_marks; i > indx_insert; i--)
        arr[i] = arr[i - 1];
    arr[indx_insert] = 2;*/

        for (int i = 1; i < N; i++)
        {
            int key = arr[i];
            int j = i - 1;   // arr[i - 1];
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                arr[j] = key;
                j--;
            }
        }


        for (int i = 0; i < N; i++)
            std::cout << arr[i];


        return 0;
    }
