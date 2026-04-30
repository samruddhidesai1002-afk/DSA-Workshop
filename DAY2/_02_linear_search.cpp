#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            cout<<i;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<-1;
    }
    return 0;
}