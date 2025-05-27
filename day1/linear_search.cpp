#include<iostream>
using namespace std;
int main(){
int arr[]={1,5,7,9,8,3,6};
int n=sizeof(arr)/sizeof(int);
int key=8;
for(int i=0;i<n;i++){
if(arr[i]==key){
    cout<<i<<endl;
    return 0;
}
}



    return 0;
}