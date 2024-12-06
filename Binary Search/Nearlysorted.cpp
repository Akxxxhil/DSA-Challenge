#include <iostream>
#include <vector>

using namespace std;
int binarysearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 > 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr{10,3,40,20,50,80,70};
    int target=3;
    int ans= binarysearch(arr,target);
    cout<<"the index is "<< ans <<endl;
}