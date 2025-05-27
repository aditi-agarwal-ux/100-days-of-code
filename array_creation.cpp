#include<iostream>
using namespace std;
int main(){
 int arr[]={1,2,3,4,5};//creation without defining about the size
 int nums[5]={10,20,30,40,50};//creation with defining about the size
 //here the size is got fixed at the compile time we cant fix it at the run time
int n1=sizeof(arr)/sizeof(int);
int n2=sizeof(nums)/sizeof(int);
for(int i=0;i<n1;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<n2;i++){
    cout<<nums[i]<<" ";
}
    return 0;
}