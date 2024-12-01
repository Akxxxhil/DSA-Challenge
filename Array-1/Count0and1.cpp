#include <iostream>
using namespace std;
int main (){
    int arr[5]={1,1,1,0,0};
    
    int count1=0;
    int zerocount=0;
    for (int i=0;i<5;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else{
            count1++;
        }

    }
    cout<<"count of zero is "<< zerocount<<endl;
    cout<<"count of one is "<< count1<<endl;
}