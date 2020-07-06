#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*This function to swap multiplication variables in case value a is greater than b, since we use recursion it will cause a problem*/
float swap(float *x,float*y)
{
    float temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
float multi(float a, float b)
{
  /*printf("%f\n%f\n",a,b );*/
  if(a<0&&b<0)
  {
    a=-a;
    b=-b;
  }
  if(a>b)
  swap(&a,&b);
  if(b==0)
  return(0);
  else if(b>0)
  return (a+multi(a,b-1));
  else
  return(a+multi(a,-b));
}
float divi(float a,float b)
{
  int flag;
  if(a<0)
  {
    flag++
    a=-a;
  }
  if(b<0)
  {
    flag++;
    b=-b;
  }
  float d=0,po=0,count,q=0;
  if(b==0)
  {
    printf("denominator cannot be 0");
    exit(0);
  }/*you can edit range of this for loop to get more accurate results, now it gives result upto 5 decimals(i<5)*/
  for(int i=1;i<5;i++)
  {

    if(a==0) break;
    while(a<b)
    {
      a=multi(a,10);
      po++;
    }
    count=0;
  while(a-b>=0)
    {
      a=a-b;
      count++;
    }
    d=pow(0.1,po);
    q=q+multi(count,d);
  }
    if (flag==1)
  q=-q;
    return(q);
}
int main()
{
printf("%f\n%f\n",divi(5,0),multi(6,3));
}
