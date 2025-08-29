#include<stdio.h>
float main()
{
float P,R,T,interest;
printf("enter the P");
scanf("%f",&P);
printf("enter the R");
scanf("%f",&R);
printf("enter the T");
scanf("%f",&T);
interest=(P*R*T)/100;

printf("interest=%f",interest);
return 0;
}
