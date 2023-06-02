#include<iostream>
using namespace std;
int bsearch(int *arr,int s,int e,int k)
{
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        bsearch(arr,s,mid-1,k);
    }
    else{
        bsearch(arr,mid+1,e,k);
    }
}
void ssort(int *arr,int n)
{
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mi]){
                mi=j;
            }
        }
        swap(arr[i],arr[mi]);
    }
}
int main()
{
    int n;
    cout<<"enter the length ";
    cin>>n;
    cout<<"enter the elements "<<endl;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ssort(arr,n);
    cout<<"after sorting ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"enter the element for searching";
    cin>>k;
    cout<<bsearch(arr,0,n,k);
}
