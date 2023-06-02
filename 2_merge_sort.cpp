#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int nl, nr;
    nl= mid - left +1;
    nr= right - mid;
    int L[nl], R[nr];

    for(int i=0; i<nl; i++)
        L[i]=arr[left+i];
    for(int j=0; j<nr; j++)
        R[j]=arr[mid+1+j];
    int i=0, j=0, k=left;

    while(i<nl && j<nr){
        if(L[i] <= R[j]){
            arr[k]=L[i];
            i++; k++;
        }
        else{
            arr[k]=R[j];
            j++; k++;
        }
        // k++;
    }
    while(i < nl){
        arr[k] = L[i];
        i++; k++;
    }
    while(j < nr){
        arr[k] = R[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int left, int right){
    int mid;
    if(right > left){
        mid = (left + right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n-1);

    cout<<"After sorting array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
