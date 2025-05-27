#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30};
cout<<*arr<<" ";//name of the array is a pointer itself
cout<<*(arr+1)<<" ";
cout<<*(arr+2)<<" ";
cout<<endl;

    return 0;
}