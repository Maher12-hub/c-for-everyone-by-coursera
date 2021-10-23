#include<stdio.h>
long int factorial(int n){
long int sum=1;
for(int i=n;i>=1;i--) sum*=i;
return sum;
}
long int recursive_factorial(int n){
if(n==1) return 1;
else return(recursive_factorial(n-1)*n);

}



int main(){
int count;
printf("I want factorial upto n:");
scanf("%d",&count);
for(int i=1;i<=count;i++){
    printf("Factorial(%d)=%ld\n",i,factorial(i));
}
printf("\n\n");
for(int i=1;i<=count;i++){

    printf("Factorial(%d)=%ld\n",i,recursive_factorial(i));
}

}
