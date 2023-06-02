#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low-1;
    for( int j= low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high){
    if(low< high){
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi,high);
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

    quickSort(arr, 0, n-1);

    cout<<"After sorting array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
