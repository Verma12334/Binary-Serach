#include<iostream>
using namespace std;
 void selectio_sort(int arr[],int n);
int main(){
    int arr[10]={1,2,3,4,5,6,6,7,8,9};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    selectio_sort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
    void selectio_sort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    int c=arr[i];
                    arr[i]=arr[j];
                    arr[j]=c;
                }
            }
        }
    }