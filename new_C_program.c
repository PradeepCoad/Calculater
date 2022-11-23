#include<stdio.h>
#include<math.h>
#include<conio.h>
int x;
int Addition(){
    int a,b;
    printf("Enter a and b=");
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("sum =%d",c);
return 0;
}
int Subtract(){
    int a,b;
    printf("Enter a and b=");
    scanf("%d %d",&a,&b);
    int c=a-b;
    printf("subtract =%d",c);
return 0;
}
float Product(){
    float a,b;
    printf("Enter a and b=");
    scanf("%f %f",&a,&b);
    float c=a*b;
    printf("Product =%f",c);
return 0;
}
float Division(){
    float a,b;
    printf("Enter a and b=");
    scanf("%f %f",&a,&b);
    float c=a/b;
    printf("Quatent =%f",c);
return 0;
}
int Reminder(){
    int a,b;
    printf("Enter a and b=");
    scanf("%d %d",&a,&b);
    int c=a%b;
    printf("Reminder =%d",c);
return 0;
}
float Power(){
    float a,b;
    printf("Enter a number and it's power =");
    scanf("%f %f",&a,&b);
    float c=pow(a,b);
    printf("Power=%f",c);
    return 0;
}
float squarRoot(){
    float a;
    printf("Enter a Number =");
    scanf("%f ",&a);
    float c=sqrt(a);
    printf("Squar Root =%f",c);
    return 0;
}

void main(){

printf(" 1=Addition \n 2=Subtraction \n 3=Multiplication \n 4=Division \n 5=Reminder \n 6=Power \n 7=Squar root \n Choose a function:");
int a;
scanf("%d",&a);


if (a==1)
{
  Addition();
}else if (a==2)
{
  Subtract();
}else if (a==3)
{
  Product();
}else if (a==4)
{
  Division();
}else if (a==5)
{
  Reminder();
}else if (a==6)
{
  Power();
}else if (a==7)
{
  squarRoot();
}else{
    printf("##########----------Wrong input----------##########");
}


}
