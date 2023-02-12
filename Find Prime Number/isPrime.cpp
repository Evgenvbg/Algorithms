bool isPrime(int n) {
    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
            return false;
        
            
    }
    return true;
}

int main()
{
    int num;
    std::cin >> num;

    int *arr = new int[num];
    
    for (int i = 0; i < num; i++) {
        arr[i] = i;

    }
    for (int i = 0; i < num; i++) {
        if (isPrime(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }

    delete[] arr;

    return 0;
}
