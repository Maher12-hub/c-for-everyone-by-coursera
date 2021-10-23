#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
double average(int row,int col,int mat[row][col]){
int i,j;
double sum=0.0;
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        sum+=mat[i][j];
    }
}
printf("Sum is=%.2lf\n",sum);
return sum/32.0;


}
int main(){

int row=30,col=20;
int mat[row][col];
int i,j;
FILE *file;
file=fopen("input.txt","r");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        //if(!fscanf(file,"%d",&mat[i][j])) break;
        fscanf(file,"%d",&mat[i][j]);
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
}
double result=average(row,col,mat);
printf("average is=%.2lf\n",result);


}
