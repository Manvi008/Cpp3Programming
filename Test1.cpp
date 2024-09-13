#include<bits/stdc++.h>
using namespace std; 
int sol(int arr[], int n ){
    int sum = 0;
    sort(arr , arr+n);
    for(int i = 1; i < n ; i ++){
        sum += abs(arr[i]- arr[i-1]);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
while(t--){
    int n ; 
    cin>>n ;
    int arr[1000];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = sol(arr , n);
    cout<<ans<<endl;
}
return 0 ;
}
