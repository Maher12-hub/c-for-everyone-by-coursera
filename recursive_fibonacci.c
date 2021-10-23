#include<stdio.h>
long int fibonacci(int n){
long int f2=0,f1=1,f_old=0,i;
for(i=0;i<n;i++){
    f_old=f2;
    f2=f1+f2;
    f1=f_old;
}
return f2;
}
long int recursive_fibonacci(int n){
if(n<=1) return n;
else return (recursive_fibonacci(n-1)+recursive_fibonacci(n-2));
}

int main(){
int n,i;
printf("I want fibonacci upto n:");
scanf("%d",&n);
for(i=0;i<=n;i++){
    printf("fib(%d)= %ld\t%ld\n",i,fibonacci(i),recursive_fibonacci(i));
}

}
