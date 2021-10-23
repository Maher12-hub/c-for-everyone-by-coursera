#include<stdio.h>
double square(double);
double cube(double);
int main(){
int num;
printf("I want square and cube from 1 to n where n is:");
scanf("%d",&num);
for(int i=1;i<=num;i++){
    for(int j=0;j<=10;j++){
        printf("%lf\t%lf\t%lf\n",i+j/10.0,square(i+j/10.0),cube(i+j/10.0));
    }

}


}
double square(double x){
return x*x;
}

double cube(double x){
return x*x*x;
}
