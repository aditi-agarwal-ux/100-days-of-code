#include<iostream>
using namespace std;
void bruteforce(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currsum=0;
           for(int i=start;i<=end;i++){
            currsum+=arr[i];
           } 
           cout<<currsum<<",";
        }
        cout<<endl;
    }

}
int main(){







    return 0;
}
