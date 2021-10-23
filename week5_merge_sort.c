#include<stdio.h>
void merge(int a[],int b[],int m,int n){
int i,j,k;
i=j=k=0;
int c[m+n];
while(i<m && j<n){
    if(a[i]<b[j]){
        c[k]=a[i];
        i++;k++;
    }
    else{
        c[k]=b[j];
        j++;k++;
    }
}
while(i<m){
    c[k]=a[i];
    i++;k++;
}
while(j<n){
    c[k]=b[j];
    j++;k++;
}
printf("merged algorithm is:\n");
for(i=0;i<m+n;i++){
    printf("%d\t",c[i]);
}
printf("\n");

}
int main(){
int m,n;
printf("enter size of the array:");
scanf("%d %d",&m,&n);
int a[m];
int b[n];

for(int i=0;i<m;i++){
    scanf("%d",&a[i]);
}
for(int j=0;j<n;j++){
    scanf("%d",&b[j]);
}
merge(a,b,m,n);




}
