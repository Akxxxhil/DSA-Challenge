#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 5, 7, 9};
    int newans[2];
    int ans = 10;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == ans)
            {
                newans[0] = arr[i];
                newans[1] = arr[j];
            }
        }
    }
    cout << newans[0] << " " << newans[1] << " " << endl;
}