#include<stdio.h>
void func_wrt(int count){
while(count>0){
    printf("very\n");
    count--;
}
printf("  Much\n");
}
int main(){
int repeat=0;
printf("how strong is your love?1-10:");
scanf("%d",&repeat);
printf("I love you very\n");
func_wrt(repeat);



}
