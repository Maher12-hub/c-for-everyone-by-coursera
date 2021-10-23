#include<stdio.h>

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;

}
void print_array(int data[],int n,char *str){
int i;
printf("%s\n",str);
for(i=0;i<n;i++){
    printf("%d\t",data[i]);
}


}
void bubble(int data[],int n){
int i,j,go_on;
for(i=0;i<n;i++){

    print_array(data,n,"inside bubble ");
    printf("i=%d,input any number to repeat:",i);
    scanf("%d",&go_on);
    printf("\n");
    for(j=n-1;j>i;j--){
        if(data[j-1]>data[j]) swap(&data[j-1],&data[j]);
    }
}

}


int main(){
    const int size=5;
    int grades[]={14,33,27,35,10};
    print_array(grades,size,"my grades:");
    bubble(grades,size);
    print_array(grades,size,"sorted grades are:");
    return 0;

}
