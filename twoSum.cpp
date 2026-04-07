// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector <int>arr = {1,2,3,4,6};
    int n = arr.size();
    int target = 6;
    int left = 0;
    int right = n - 1;
    int sum = 0;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<<"Found "<<arr[left] <<"+"<<arr[right];
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
  

    return 0;
}
