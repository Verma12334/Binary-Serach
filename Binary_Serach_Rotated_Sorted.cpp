#include<iostream>
using namespace std;
int BinarySerach(int arr[],int start,int end,int key);
 int pivot(int arr[],int size);
int main(){
    int arr[6]={7,9,1,2,3,4};
  
    int key=9;
    
    int pivot1=pivot(arr,6);
    if(key>=arr[pivot1] && key<=arr[6-1]){
      cout<<BinarySerach(arr,pivot1,6-1,key);
       
    }
    else{
         cout<<BinarySerach(arr,pivot1,6-1,key);
    }
    return 0;

}
 int BinarySerach(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
        return mid;
        }

        //GO to right side
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
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