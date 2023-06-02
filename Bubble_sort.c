#include<stdio.h>
void swaps(int *x,int *y){
     int temp =*x;
           *x=*y;
           *y=temp;
}

void bubblesort(int a[],int n){
      for(int i=0;i<n-1;i++){

          for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swaps(&a[j],&a[j+1]);
            }
          }
      }

}


int main(){
     int a[50],n,i;
     printf("enter the size of array:\n");
     scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("element before sorting;\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
     bubblesort(a,n);
      printf("\narray after sorting \n");
      for(i=0;i<n;i++){
            printf("%d\t",a[i]);
      }
      return 0;
}
