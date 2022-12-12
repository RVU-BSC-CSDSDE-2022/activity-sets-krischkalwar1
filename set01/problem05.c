#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
  input();
}
int input()
{
  int a ,b, c , largest;
  printf("Enter 3 numbers:");
  scanf("%d%d%d", &a,&b,&c);
  largest=compare(a,b,c);
  output(a,b,c,largest);
  
}
int compare(int a , int b, int c)
{
  int largest; 
  if (a >=b && a >= c)
    largest=a;
  else if (b >=a && b >= c)
    largest=b;
  else 
    largest=c;
  
  return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("The Largest %d , %d and %d  is %d ",a,b,c,largest);
}