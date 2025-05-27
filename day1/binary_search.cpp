#include<iostream>
using namespace std;
int main(){
int arr[]={0,1,4,6,7,8,9};
int st=0;
int key=6;
int end=(sizeof(arr)/sizeof(int))/sizeof(int);
while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]==key){
        cout<<mid<<end;
        return 0;
    }
    else if(arr[mid]>key){
        end--;
    }
    else{
        st++;
    }
}



    return 0;
}