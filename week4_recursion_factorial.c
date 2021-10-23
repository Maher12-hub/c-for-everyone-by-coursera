#include<stdio.h>
int sum=1;
int recursion(int n){


if (n==1) return 1;
int a=(recursion(n-1)*n);
printf("%d\n",a);
  return a;

}

int main(){
int n,a;
printf("enter an integer:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("Factorial(%d)=%d\n",i,recursion(i));
}
}
