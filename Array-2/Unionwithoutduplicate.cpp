#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    vector<int> brr{2, 3, 9, 10, 11};
    vector<int> ans;
    // ans should be 1,2,3,4,5,6,7,9,10,11
    for (int i = 0; i < arr.size(); i++)
    {
        int ele = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (ele == brr[j])
            {
                brr[j] = -1;
                 ans.push_back(arr[i]);
            }
            else
            {
                ans.push_back(arr[i]);
                
            }
        }
    }
    for (int i=0;i<brr.size();i++){
        if(brr[i]!=-1){
            ans.push_back(brr[i]);
        }
    }

    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}