#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int t,a[1000],b[1000],i,j,val,count;
 //t is no.of test cases and a and b are the input integers
 
 scanf("%d",&t);
 
 for(i=0;i<t;i++)
 scanf("%d%d",&a[i],&b[i]);
 
 //printf for debug
/* printf("inputs are\n");
 for(i=0;i<t;i++)
 printf("%d %d\n",a[i],b[i]);*/
 
 // function to calculate the number of 1s
 int nofones(int a)
 {
 	int i,temp=0;
 	
 	//printf("a is %d\n",a);
 	
 	for(i=0;i<32;i++)
     temp=temp+!!(a&(1<<i));
     
     return temp;
 
  } 
  
  for(i=0;i<t;i++)
  {
  count=0;
  val=a[i];j=0;
  while(val<=b[i])
  {
  	count=count+nofones(val);;
  	//printf("c is %d\n",c[j]);
  	val++;
  	j++;
  	
  }
/*  count=0;
  len=b[i]-a[i];
  if(len<0)
  len=len*-1;
  for(k=0;k<len;k++)
  { //printf("c is %d\n",c[k]);
  	
  }*/
  printf("%d\n",count);
}
 

 
   
    return 0;
}