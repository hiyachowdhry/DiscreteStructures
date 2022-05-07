#include<iostream>
using namespace std;
void bubble(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}
void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Initial array is: ";
    print(arr,n);
    bubble(arr,n);
    cout<<"Sorted array is: ";
    print(arr,n);
    return 0;
}
