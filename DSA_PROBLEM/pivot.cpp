#include<iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int num[10000];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"the pivot is "<<pivot(num,size);
    return 0;

}
