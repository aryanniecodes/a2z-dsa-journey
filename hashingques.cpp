#include <bits/stdc++.h>
using namespace std;

void print_array(int n,int *arr){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void inp_array(int n,int *arr){
      map<int, int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
         mpp[arr[i]]++;
    }
}


int main(){
      int n;
      cin>>n;
      int arr[n];
      inp_array(n,arr);
        map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    int maxFreq = 0;
    int minFreq = INT_MAX;
    int maxElement, minElement;

    for(auto it : mpp) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }

        if(it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Max frequency element: " << maxElement << endl;
    cout << "Min frequency element: " << minElement << endl;
     
}