#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start <= end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    reverse(arr,size);
    printarray(arr,size);

}