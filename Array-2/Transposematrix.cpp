#include<iostream>
using namespace std;

int tarnspose[3][3];
void transpose(int arr[][3],int rows,int col){
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
           tarnspose[j][i]=arr[i][j];
        }
    }

    // for (int i=0;i<rows;i++){
    //     for (int j=0;j<col;j++){
    //        arr[i][j]=tarnspose[i][j];
    //     }
    // }


}
void printarrau(int arr[][3],int rows,int col){
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            cout<<tarnspose[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main (){
    int rows=3;
    int col=3;
    int arr[3][3]={{2,4,6},{1,3,5},{9,11,13}};
    transpose(arr,3,3);
    printarrau(arr,3,3);
}