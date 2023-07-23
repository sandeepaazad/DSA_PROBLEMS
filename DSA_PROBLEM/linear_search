#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {return 1;}
    }
    return 0;
}

int main()
{
    int size;
    cout<<"Enter the value of size: ";
    cin>>size;
    int arr[10000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    bool found = search(arr,size,key);
    if(found)
    {
        cout<<"Key is present "<<endl;
    }
    else
    {
        cout<<"Key is not present";
    }
    return 0;
}
