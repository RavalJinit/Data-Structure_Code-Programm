#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n != 0)    
{    
r=n%10;    
result += r*r*r;    
n /= 10;    
}    
if(temp==result)    
printf("armstrong  number ",n);    
else    
printf("not armstrong number",n);    
return 0;  
}   
