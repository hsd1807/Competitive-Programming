#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    int i=n;
    while(i--) cin>>arr[i];
    while(i++<n-1) cout<<arr[i]<<' ';  
    return 0;
}
