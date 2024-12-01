#include <iostream>
using namespace std;
int main (){
    int arr[6];
    for (int i=0;i<6;i++){
        cin>>arr[i];
    }
    for (int i=0;i<6;i++){
        arr[i]=arr[i]* arr[i];
    }
    for (int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}

// question :- take input and make it double and return