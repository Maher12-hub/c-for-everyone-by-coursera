#include<stdio.h>
#include<math.h>
double sin_func(double value){

double sin_value;
sin_value=sin(value);
return sin_value;

}
double cos_func(double value){
double cos_value;
cos_value=cos(value);
return cos_value;
}

int main(){
double i;
double sin_value,cos_value;
for(i=0;i<=1.0;i+=.1){
    sin_value=sin_func(i);
    cos_value=cos_func(i);
    printf("sin(%lf)=%lf\tcos(%lf)=%lf\n",i,sin_value,i,cos_value);


}
return 0;

}
