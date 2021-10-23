#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int lo,int mid,int hi){
int i,j,k;
i=lo,j=mid+1;k=lo;
int b[100];
while(i<=mid && j<=hi){
    if(a[i]<a[j]){
        b[k]=a[i];
        i++;k++;
    }
    else{
        b[k]=a[j];
        j++;k++;
    }
}
    while(i<=mid){
        b[k]=a[i];
        i++;k++;
    }
    while(j<=hi){
        b[k]=a[j];
        j++;k++;
    }
    for(int i=0;i<=hi;i++){
        a[i]=b[i];
    }

}
void merge_sort(int a[],int l,int h){
int mid;
if(l<h){
    mid=(l+h)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,h);
    merge(a,l,mid,h);
}
}
void print_array(int *a,int n){
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
printf("\n");

}



int main(){

int a[]={7,8,11,1,2,6};
int n=6;
print_array(a,n);
merge_sort(a,0,5);
print_array(a,n);

}
