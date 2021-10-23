#include<stdio.h>
#include<stdlib.h>
int main(){
int blanks=0,digits=0,letters=0,total_chars=0;
int c;
for(;((c=getchar())!=EOF);total_chars++){
    if(c==' ') blanks++;
    if(c>='0' && c<='9') digits++;
    if((c>='a' && c<='z') || (c>='A' && c<='Z')) letters++;

}
printf("letters=%d\n digits=%d\n blanks=%d\n total_chars=%d\n",letters,digits,blanks,total_chars);
return 0;


}
