#include<iostream>
using namespace std;
int main(){
int arr[]={4,9,10,6,8};
int max=arr[0];
for(int i=1;i<sizeof(arr)/sizeof(int);i++){
    if(max<arr[i]){
       max=arr[i];
    }
}
cout<<max<<endl;

    
    return 0;
}