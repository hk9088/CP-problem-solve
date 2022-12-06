#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        long long int arr[n], lowest=INT_MAX,higgest=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>higgest){
                higgest =  arr[i];
            }
            if(arr[i]<lowest){
                lowest = arr[i];
            }
        }
        cout<<higgest - lowest<<endl;
    }
}
