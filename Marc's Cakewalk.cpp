#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i,n,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
     cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    for(i=0;i<n;i++)
        sum = sum + (pow(2,i)*arr[i]);
    cout<<sum;
    return 0;
}
