#include<stdio.h>
float main()
{
float a,b,temp;
printf("enter the a");
scanf("%f",&a);
printf("enter the b");
scanf("%f",&b);


temp=a;
a=b;
b=temp;


printf("after swapping:/n");
printf("a=%f\n",a);
printf("b=%f\n",b);
return 0;
}
