#include <iostream>

int main()
{
    const int N = 5;
    int arr[N] = { 0,8,3,1,2 };

    int tmp = 0;
    for (int i = 0; i < N - 1; i++)
    {
        int min_ind = i;
        for (int j = i; j < N; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        if (i != min_ind) {
            tmp = arr[i];
            arr[i] = arr[min_ind];
            arr[min_ind] = tmp;
        }
    }
     
    for (int i = 0; i < N; i++)
    {
        std::cout << arr[i];

    }
}
