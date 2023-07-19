#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid>x])
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int x=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"size is array list is: "<<n<<endl;
    cout<<"element to be searched is: "<<n<<endl;
    int result=binarysearch(arr,n,x);
    if(result==-1)
    cout<<"Not present";
    else
    cout<<"Present! at the index:"<<" "<<result<<" ";
    return 0;


}