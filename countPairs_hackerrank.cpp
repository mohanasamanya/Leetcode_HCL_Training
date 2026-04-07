#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);

    int slow = 0;
    int fast = 1;
    int count = 0;
    while(fast<n){
        int diff = arr[fast] - arr[slow];
        if(diff == k){
            count++;
            slow++;
            fast++;
        }
        else if(diff<k){
            fast++;
            
        }
        else{
            slow++;
        }
    }
    cout<<count;
    return 0;
}
