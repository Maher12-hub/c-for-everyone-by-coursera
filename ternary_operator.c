#include<stdio.h>
/*int main(){
int a,b,value;
scanf("%d %d",&a,&b);
value=(a<b? a:b);
printf("%d\n",value);

}
*/
int main(){
int speed;
printf("enter speed as an integer:");
scanf("%d",&speed);
speed=((speed<=65)? (65):(speed<=75)? (75):(90));
switch(speed){
case 65: printf("No speeding ticket\n"); break;
case 75: printf("speeding ticket\n"); break;
case 90: printf("expensive speeding ticket\n"); break;
default: printf("Incorrect speed\n");
}
return 0;
}
