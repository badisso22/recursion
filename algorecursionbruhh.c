#include <stdio.h>
#include <stdlib.h>
 
 
 
int displaylefteven(int n){
if(n<10){
if(n%2==0){ printf("%d ",n);
}
} else{
displaylefteven(n/10);
if(n%2==0){
printf("%d ",n%10);
}
}
}
 
void displayrighteven(int n){
if(n<10){
if(n%2==0){ printf("%d ",n);
}
} else{
if(n%2==0){
printf("%d ",n%10);
}
displayrighteven(n/10);
}
}
 
int bintodec (int n){
if(n==0){
return 0;
} else{
return n%10+2*bintodec(n/10);
}
}
 
int dectobin(int n){
if (n==0){
return 0;
} else{
return n%2+10*dectobin(n/2);
}
}
 
 
int GCD (int a,int b){
if (a%b==0){
return b;
} else return GCD(b,a%b);
}
 
 
int LCM (int a, int b, int i){
if (a<b){
LCM(b,a,i);
} else {
if (a*b==0){
return 0;
 
}else {
if((i*a)%b==0){
return i*a;
} else{
return LCM(a,b,i+1);
}
}
}
}
 
 
int main()
{
int n,a,b,i;
/*printf("input the number : ");
scanf("%d",&n);
printf("displaying from the left \n");
displaylefteven(n);
 
printf("\n");
printf("displaying from the right \n");
displayrighteven(n);*/
 
/*printf("\ninput a binary number:");
scanf("%d",&n);
printf("\nThe decimal value is:%d",bintodec(n));*/
 
 
/*printf("\nInput a decimal number:");
scanf("%d",&n);
printf("\nThe Binary value is:%d",dectobin(n));*/
 
 
/*printf("\nInput a number a:");
scanf("%d",&a);
printf("\nInput a number b:");
scanf("%d",&b);
printf("\nThe greatest common divisor between them is:%d",GCD(a,b));*/
 
i=0;
printf("\nInput a number a:");
scanf("%d",&a);
printf("\nInput a number b:");
scanf("%d",&b);
printf("\nThe Lowest common multiple between them is:%d",LCM(a,b,i));
 
return 0;
 
}
 
 