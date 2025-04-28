// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std ;
void SelectionSort(vector<int> &numbers){
    for(int i = 0 ; i < numbers.size() ; i ++){
    int min = i;
    for(int j = i +1 ;  j < numbers.size() ; j++){
        if(numbers[j]< numbers[min]){
           min = j;
        }
    }
     swap(numbers[i] , numbers[min]);
}
}
int main() {
    // Write C++ code here
vector<int> numbers = {1,8,0,4};
SelectionSort(numbers);
for(int arr: numbers){
    cout<<arr<<" ";
}

    return 0;
}
