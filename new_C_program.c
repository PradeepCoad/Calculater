#include<stdio.h>
#include<math.h>
#include<conio.h>
//New Demo
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
float areaOfRectangel(){
    float a,b,area;
    printf("Enter sides =");
    scanf("%f %f",&a,&b);
   area=a*b;
    printf("Area of rectangel =%f",area);
    return 0;
}
float areaOfCircle(){
  float r,a;
  printf("Enter radius=");
  scanf("%f",&r);
  a=3.14*r*r;
  printf("%f",a);
  return 0;
} 

void main(){

printf(" 1=Addition \n 2=Subtraction \n 3=Multiplication \n 4=Division \n 5=Reminder \n 6=Power \n 7=Squar root \n 8=Area of Rectangel \n9=Area of circle \n Choose a function:");
int a;
scanf("%d",&a);

switch(a)
{
  case 1:Addition();
  break;
  case 2:Subtract();
  break;
  case 3:Product();
  break;
  case 4:Division();
  break;
  case 5:Reminder();
  break;
  case 6:Power();
  break;
  case 7:squarRoot();
  break;
  case 8:areaOfRectangel();
  break;
  case 9:areaOfCircle();
  break;
  default:printf("Wrong input");
  break;
}

//hello

}
