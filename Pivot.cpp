#include<iostream>
using namespace std;
 int pivot(int arr[],int size);
int main(){
    int arr[6]={7,9,1,2,3,4};
    int key=9;
}


 int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
     int mid=start+(end-start)/2;
     while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
         mid=start+(end-start)/2;
     }
     return start;
 }