#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = 0;
    for (int i = m; i < (m + n) ; i++)
    {
        while (k < n)
        {   cout<<"k is "<< k<<" and i is "<<i <<endl;
            nums1[i] = nums2[k];
        }
            k++;
    }
    sort(nums1.begin(), nums1.end());
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge( nums1, 3, nums2, 3);
    cout<<nums1[3]<<" "<<nums1[4]<<" "<<nums1[5];
    // cout << "after sorting " << endl;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << nums1[i] << " ";
    // }
    // cout << endl;
    return 0;
}