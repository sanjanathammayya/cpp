
#include <iostream>

using namespace std;

int* array_rev(int n,int a[]){
    int temp=0;
    for(int i=0,j=n-1;i<n/2;i++,j--){
        temp=a[i+1];
        a[i+1]=a[j-1];
        a[j-1]=temp;
    }
    return a;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int* ptr;
    ptr=array_rev(n,a);
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    

    return 0;
}

