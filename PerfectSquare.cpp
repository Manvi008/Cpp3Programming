#include<bits/stdc++.h>
using namespace std;

    int  PerfectSquare(int arr[], int n){
        int count = 0 ;
    for(int i = 0 ; i <n ; i++){
        if((ceil(sqrt(arr[i]))==(floor(sqrt(arr[i])))))
        {
            count ++;
            
        }
    }
        return count ;
            
        
    }
    int main(){
       
        int arr[]= {12 ,16,81,64,17};
        int ans=PerfectSquare(arr,5);
        cout<<ans;
        return 0;
}
