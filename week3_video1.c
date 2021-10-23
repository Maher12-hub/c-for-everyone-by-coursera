#include<stdio.h>
int main(){
int outside,weather;
printf("enter if outside 1 True 0 False:");
scanf("%d",&outside);
printf("enter if raining 1 True 0 False:");
scanf("%d",&weather);
if(outside && weather) printf("please use an umbrella\n");
else printf("you can dress normally\n");
return 0;
}


