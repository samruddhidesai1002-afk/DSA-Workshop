#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Logic
    int max=-1;
    int sec_max=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]>sec_max && arr[i]<max){
            sec_max=arr[i];
        }

        cout<<sec_max<<endl;
    }

    

    return 0;
}