#include<stdio.h>
#include<math.h>
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
  if(a>b)
  swap(&a,&b);
  if(b==0)
  return(0);
  else if(b>0)
  return (a+multi(a,b-1));
  else
  return(a+multi(a,-b));
}
float div(float a,float b)
{
  float d=0,po=0,count,q=0;
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
    return(q);
}
int main()
{
printf("%f\n%f\n",div(5,2),multi(6,3));
}
