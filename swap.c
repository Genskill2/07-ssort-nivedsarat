#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

void swap_max(int a[],int l,int n)
{
 int max=a[n];
 int index=n;
 int i;
 for(i=n;i<l;i++)
 {
  if(a[i]>max)
  {
    max=a[i];
    index=i;
  }
 }
 int temp;
 temp=a[n];
 a[n]=max;
 a[index]=temp;
}


void ssort(int a[],int l)
{
 int  i;
 for(i=0;i<l;i++)
   swap_max(a,l,i);
}
