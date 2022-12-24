#include <iostream>
using namespace std;
void insertionSort(int *arr, int beginIndex, int endIndex)
{
    if (beginIndex == endIndex)
        return;
    int flag = 0;
    int i;
    int toSort = arr[beginIndex + 1]; // assume 1st is sorted and usko ab sorted array
                                         // me kaha dale yeh dekhna hai
    for (i = beginIndex; i >= 0; i--)
    {
            if (toSort < arr[i])
        {
            arr[i + 1] = arr[i];    //this basically does all the shifting
            flag = 1;
        }
        else       // dry run krke dekho jaha rukoge usse ek aage wali index
            break; // pe dalna hoga tumhe apne toSort wala element and also i
    }              // scope me rahe islie usko global banaya hai..
    if (flag)
      arr[i + 1] = toSort; //dal diye toSort wala element sorted array me sahi jagah pe
    insertionSort(arr, beginIndex + 1, endIndex);  //recursion call
}
int main()
{
    int arr[5] = {4, 6, 2, 9, -1};
    insertionSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void Rearrange(int arr[], int n)
{
    // Your code goes here
    int p = 0;
    int *ans = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            ans[p++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            ans[p++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
    delete[] ans;
}