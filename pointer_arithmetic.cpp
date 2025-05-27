#include<iostream>
using namespace std;
int main(){
int a=5;
int *ptr=&a;
cout<<ptr<<endl;
int *ptr2=ptr+3;
cout<<(ptr2-3)<<endl;
cout<<ptr2-ptr<<endl;
cout<<(ptr2>ptr)<<endl;
cout<<((ptr2-3)==ptr)<<endl;

    return 0;
}