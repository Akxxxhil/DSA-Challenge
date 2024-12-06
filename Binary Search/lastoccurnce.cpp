#include<iostream>
#include<vector>
using namespace std;


int lastoccurance(vector<int>arr,int size,int target){
    int start=0;
    int end=arr.size()-1;
    int lastoccurance= -1;// 4 
    while(start <= end){
        int mid=start +(end-start)/2;
        if(arr[mid]==target ){
            lastoccurance=mid;
            start=mid+1;
            
        }
        else if (arr[mid] < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }


    }
    return lastoccurance;
} 
int main (){
    //             0 1 2 3 4 5 6 7 8 9
    vector<int>arr{1,3,4,4,4,4,4,6,7,9};
    //             s       m          e
    int target=4;
    cout<<"the answer is"<< " " <<lastoccurance(arr,10,4);
}