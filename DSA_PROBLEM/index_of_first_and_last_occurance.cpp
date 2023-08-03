#include<iostream>
using namespace std;
//first occurance
int firstoccur(int arr[],int n,int key)
{
    int s=0 , e=(n-1);
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
//last occurance
int lastoccur(int arr[],int n,int key)
{
    int s=0 , e=(n-1);
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
//total number of occurance


int main()
{   
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100000];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    int key;
    cout<<"enter the key:";
    cin>>key;
    cout<<"first occurance is at index: "<<firstoccur(num,size,key);
    cout<<endl;
    cout<<"last occurance is at index: "<<lastoccur(num,size,key);
    cout<<endl;
    cout<<"total number of occurance if: "<<((lastoccur(num,size,key)-firstoccur(num,size,key))+1);
    return 0;


}
