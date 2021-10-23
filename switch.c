#include<stdio.h>
int main(){
int i;
printf("enter the value of i:");
scanf("%d",&i);
switch(i){
case 1: i=2*i; break;
case 2: i=3*i;
default: 4*i;
}
//printf("%d\n",i);
return 0;

}
