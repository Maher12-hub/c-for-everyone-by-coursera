#include<stdio.h>
int recursion(int n){
if(n==0) printf("blast off\n");
else{
    printf("n=%d\n",n);
    recursion(n-1);
}
}

int main(){
int n;
printf("enter the integer:");
scanf("%d",&n);
recursion(n);

}
