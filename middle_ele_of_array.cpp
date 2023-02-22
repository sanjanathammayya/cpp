

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter no of element\n";
    cin>>n;
    int a[n];
    
    cout<<"enter the array elemnets\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"\narray before sorting: \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    
    
    cout<<"array after sorting: \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    int mid=0;
    
    if(n%2==0){
        mid=(n)/2;
    }
    else{
        mid=(n-1)/2;                                      
    }
    cout<<"\nmiddle element is "<<a[mid];

    return 0;
}


