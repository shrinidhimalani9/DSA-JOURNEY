#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin>> n;
    int arr[100];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int largest = arr[0];
    int secondlargest = -1;
    for (int i=1 ; i<n;i++){
        if (arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<secondlargest;

    return 0;
}