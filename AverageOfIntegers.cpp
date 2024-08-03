#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    float *arr;
    arr=new float[n];
    cout<<"Enter the values in the array: ";
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Average of the integers: "<<sum/n;
    return 0;
}
