#include<stdio.h>
double average_grades(int n,int grades[]){
int i;
double sum=0.0,average;
printf("My grades are:\n");
for(i=0;i<n;i++){
    printf("%d\t",grades[i]);
}
printf("\n");
for(i=0;i<n;i++){
    sum+=grades[i];
}
return sum;

}



int main(){
const int size=5;
int grades[]={20,30,50,70,90};
double sum=average_grades(size,grades);
printf("grades sum is %.2lf\n",sum);
printf("grades average is %.2lf\n",sum/size);
return 0;


}
