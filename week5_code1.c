#include<stdio.h>
int main(){
int i;
const int size=5;
double sum=0.0;
int grades[]={75,80,85,90,95};
printf("my grades are:\n");
for(i=0;i<size;i++){
    printf("%d\t",grades[i]);
}
printf("\n\n");
for(i=0;i<size;i++) sum+=grades[i];
printf("My average is %.2lf\n",sum/size);
return 0;

}
