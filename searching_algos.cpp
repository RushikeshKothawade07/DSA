/******************************************************************************

Programs for 
1. Linear search
2. Binary Search (Iterative)
3. Binary Search (Recursive)

*******************************************************************************/
#include <iostream>

using namespace std;

class search
{
    public:
        int linearSearch(int A[],int n,int x);
        int binarySearch(int A[],int n,int x);
        int RBinarySearch(int A[],int l,int h,int x);
};
int search ::linearSearch(int A[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==x)
            return i;
    }
    return -1;
}
int search :: binarySearch(int A[],int n,int x)
{
    int l,h,mid=0;
    l=A[0];
    h=n-1;
    
    while(l<=h)
    {
        mid=(l+h)/2;
        if(x==A[mid])
            return mid;
        else if(x>A[mid])
            l=mid+1;
        else 
            h=mid-1;
    }
    return -1;
}
int search :: RBinarySearch(int A[],int l,int h,int x)
{
    int mid;
    if(h>=l)
    {
        mid=(l+h)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]<x)
            return RBinarySearch(A,mid+1,h,x);
        else
            return RBinarySearch(A,l,mid-1,x);
    }
    else 
        return -1;
}
int main()
{
    search sh;
    int x,method,index,n;
    int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    n=sizeof(A)/sizeof(A[0]);
    
    
    cout<<"Enter element to be searched : ";
    cin>>x;
    
    
    cout<<"Enter method to be used : "<<endl;
    cout<<"1. Linear Search \n2. Binary Search (Iterative) \n3. Binary Search (Recursive) \n"<<endl;
    cin>>method;
    int l=0;
    int h=n-1;
    
    switch(method)
    {
        case 1:
            index=sh.linearSearch(A,n,x);
            if(index==-1)
                cout<<"Element not found! "<<endl;
            else
                cout<<"The element "<<x<<" is present at the index "<<index<<"."<<endl;
            break;
        case 2: 
            index=sh.binarySearch(A,n,x);
            if(index==-1)
                cout<<"Element not found! "<<endl;
            else
                cout<<"The element "<<x<<" is present at the index "<<index<<"."<<endl;
            break;
        case 3: 
            index=sh.RBinarySearch(A,l,h,x);
            if(index==-1)
                cout<<"Element not found! "<<endl;
            else
                cout<<"The element "<<x<<" is present at the index "<<index<<"."<<endl;
            break;
    
        default:
            cout<<"Invalid Choice! Please try again."<<endl;
            break;
    }
    return 0;
}

