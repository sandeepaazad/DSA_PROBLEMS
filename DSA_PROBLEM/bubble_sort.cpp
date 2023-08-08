#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
bool swapped;
for (int i = 0; i < n - 1; i++) {
swapped = false;
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
swap(arr[j], arr[j + 1]);
swapped = true;
}
}
if (!swapped) {
break;
}
}
}

void printarray(int arr[], int size) {
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";
}
}

int main() {
int size;
cout << "Enter the size of the array: ";
cin >> size;
int num[10000];
for(int i=0;i<size;i++)
{
    cin>>num[i];
}
bubblesort(num,size);
cout<<"Sorted array: ";
printarray(num,size);
return 0;

}
