#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 4, 6, 8};
    vector<int> brr{1, 3, 7};

    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}