#include <iostream>
using namespace std;
int main (){
    int maxno=INT_MIN;
    int arr[]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        if(arr[i] > maxno){
            maxno=arr[i];
        }
    }
    cout<<"the max is "<<maxno<<endl;
}