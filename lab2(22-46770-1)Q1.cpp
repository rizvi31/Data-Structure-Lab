#include<iostream>
using namespace std;

int main()
{
    int size1;
    cout<<"enter the size of the array: ";
    cin>>size1;
    int arr[size1];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size1; i++)
    {
    cin>>arr[i];
    }
    int size2;
    cout<<"enter the size of the 2nd array: ";
    cin>>size2;

    int arr2[size2];
    cout<<"enter the element of the 2nd array: ";
    for(int i=0; i<size1; i++)
    {
        cin>>arr[i];
    }
    int size3=size1+ size2;
    int mrgarr[size3];
    for(int i=0;i<size1; i++)
    {
        mrgarr[i]=arr[i];
    }
    for(int i=0; i<size2; i++)
    {
        mrgarr[size1]=arr2[i];
        size1++;
    }
    cout<<"merge array in reverse: ";
    for(int i=size3-1; i>=0; i--)
    {
        cout<<mrgarr[i]<<" ";
    }
    return 0;
}

