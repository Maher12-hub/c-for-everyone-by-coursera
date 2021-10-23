#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[1000],i,n;
void get_array(){
char b[1000];
char *token;
FILE *InputFile;
InputFile=fopen("input.txt.txt","r");
fscanf(InputFile,"%s",b);
token=strtok(b,",");
i=0;
while(token!=NULL){
    a[i]=atoi(token);
    token=strtok(NULL,",");
    i++;
}
n=i;

}
void print_array(){
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
printf("\n");

}
int main(){
get_array();
print_array();
}
