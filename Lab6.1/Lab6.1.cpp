#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int size)
{
    int MIN = -20;
    int MAX = 30;
    for (int i = 0; i < size; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

int sum(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i] > 0))
            sum += arr[i];
    }
    return sum;

}
int count(int* arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
       if ((arr[i] % 2 == 0 && arr[i] > 0))
            count++;
    }
    return count;
}

void updateArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2 != 0 || arr[i] <= 0))
        {
            arr[i] = 0;
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    const int size = 25;
    int arr[25];
    create(arr, size);
    Print(arr, size);
    cout << endl;
    cout << "sum = " << sum(arr, size) << endl;
    updateArray(arr, size);
    cout << "count = " << count(arr, size) << endl;

    Print(arr, size);
    return 0;
}
