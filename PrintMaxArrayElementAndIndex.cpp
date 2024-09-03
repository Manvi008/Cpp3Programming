
#include<bits/stdc++.h>
using namespace std;
void PrintMax(int arr[],int n )
{
    int max=INT_MIN;
    int idx=0;
    for(int i = 0 ; i <n ; i++){
        if(arr[i]>max){
            max=arr[i];
            idx = i;
        }
         }
   cout<<"The maximum value is "<<max<<endl;
   cout<<"The index is"<<idx;
    
}
int main(){
    int arr[6]={2 ,10,3, 4,5,6};
    PrintMax(arr,6);
   //cout<<"The maximum value is "<<MaxValue;
    return 0;
}
