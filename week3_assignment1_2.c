#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double interval;
int i;
for(i = 0; i <30; i++)
{
 double a=(double)i;
 interval = a/10.0;
 printf("sin( %lf ) = %lf \t", interval, abs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}
