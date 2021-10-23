#include<stdio.h>
int main(){
int n;
printf("enter size of the array:");
scanf("%d",&n);
int data[n];
for(int i=0;i<n;i++){
    scanf("%d",&data[i]);
}
for(int i=0;i<n;i++){
    printf("%d\t",data[i]);

}
printf("\n");

}
