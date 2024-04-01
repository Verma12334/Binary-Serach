#include<iostream>
using namespace std;
int Squareroot(int n);
int main(){
    int n;
     cout<<"Enter the vlaue of n\n";
    cin>>n;
    cout<<"Square root of n="<<Squareroot(n);
}

int Squareroot(int n){
    int start=0;
    int end=n-1;
    int ans=-1;
     long long int mid=start+(end-start)/2;
     while(start<=end){
     int square=mid*mid;
        if(square==n){
            return mid;
        }
        if( square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;

        }
          mid=start+(end-start)/2;
     }
}