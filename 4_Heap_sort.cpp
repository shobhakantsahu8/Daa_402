#include<iostream>
using namespace std;

void heapify (int arr[], int n, int i){
    int len=i;
    int left=2*i + 1;
    int right = 2*i + 2;
    if(left<n && arr[left]>arr[len])
        len=left;
    if(right<n && arr[right]>arr[len])
        len=right;
    if(len!=i){
        swap(arr[i],arr[len]);
        heapify(arr,n,len);
    }
}

void buildMaxHeap(int arr[], int n){
    for(int i=i/2; i>=0; i--)
        heapify(arr,n,i);
}

void heapSort(int arr[], int n){
    buildMaxHeap(arr,n);
    for(int i=n-1; i>=0; i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Before sorting array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    heapSort(arr, n);

    cout<<"After sorting array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
