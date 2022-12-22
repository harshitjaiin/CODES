#include <iostream>
using namespace std;
void leSort(int arr[], int n)
{
    int counter = 0;
    while (counter < n) 
    {
        for (int i = 0; i < n - 1; i++)
        {

            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

int main()
{
    int a[5] = {4, 7, 1, 2, 9};
    leSort(a, 5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}