#include<iostream>
using namespace std;
int Squareroot(int n);
double morePrecision(int n,int precision,int tempsol);
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempsol=Squareroot(n);

    cout<<"Answer is"<<morePrecision(n,3,tempsol)<<endl;
}













double morePrecision(int n,int precision,int tempsol){
      double factor=1;
      double ans=tempsol;
      for(int i=0;i<precision;i++){
           factor=factor/10;
 
      for(double j=ans;j*j<n;j=j+factor){
        ans=j;
      }
      }
      return ans;
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