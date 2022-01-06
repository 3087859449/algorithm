#include<stdio.h>
#include<stdlib.h>
#define size 1200
int m=-1,n=-1,j=0,k=0,l=0;
typedef struct{
 long stack[size]; 
 int top;
}sequenstack;
void initstack(sequenstack *s)
{
 s->top =-1;
}
int stackempty(sequenstack *s)
{
 if(s->top =-1) 
  return 1;                     
 else
  return 0;
}


