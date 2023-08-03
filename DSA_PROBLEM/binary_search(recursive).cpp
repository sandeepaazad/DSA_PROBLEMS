#include<iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    if(arr[mid]>x)
    return binarysearch(arr,low,mid-1,x);
    else
    return binarysearch(arr,mid+1,high,x);
}
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int x=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is: "<<n<<endl;
    cout<<"Element to be searched is: "<<x<<endl;
    int result=binarysearch(arr,0,n-1,x);
    if(result==-1)
    cout<<"Not present";
    else
    cout<<"Present! at index of: "<<result;
    return 0;


}
