#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {minIndex=j;}
        }
        swap(arr[minIndex],arr[i]);
    }

}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100000];
    cout<<"Enter array list: ";
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    selectionsort(num,size);
    cout<<"Sorted array: "<<endl;
    printarray(num,size);
    return 0;
}
