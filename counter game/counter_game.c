#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    
	unsigned long long int n,tmp,modn;
	int t,len,cnt;
	
scanf("%d",&t);

while(t--)
{
	scanf("%lld",&n);
	tmp=n;len=0;
	cnt=0;
	while(n!=1)
	{
	
		tmp=n;len=0;
		while(tmp!=0)
		{
			tmp/=2;
			len++;
			
		}
		
		//printf("%d",len);
		modn=(unsigned long long int)(1<<(len-1));
		
		if(modn==n)
		n=n/2;
		else
		n=n-modn;
		//printf("%d\n",n);
		cnt++;
		
	}
		if(cnt%2==0)
		printf("Richard");
		else
		printf("Louise");
	
}
	
	
	
	
	
/*	int ispower2(unsigned long long int x)
    {
    	return (!((x+(~0))&x))&(~(x>>31))&(!!x);
	}
	
	int highpow2(int x)
	{
		int tmp,len=0;
		tmp=x;
		while(tmp!=0)
		{
			tmp/=2;
			len++;
			
		}
		return x=x&(1<<(len-1));
	}
	
	int x;
	scanf("%d",&x);
	
	/*int x=2;
    int sig = x>>31;
    printf("sign %d\n",sig);
    int minus1 = ~0;
    printf("minus 1 %d\n",minus1);
    int xminus1 = x+ minus1;
    printf("xminus1 %d\n",xminus1);
    sig = ~sig;
    printf("~SIGn %d\n",sig);
    
	printf("xminus1&x %d\n",xminus1&x);
    printf("!(xminus1&x) %d\n",!(xminus1&x));
    printf("!!x %d\n",!!x);
    
     printf("result %d", (!(xminus1&x))&sig&(!!x));*/
     
     /*printf("result %d\n",ispower2(x));
     printf("modified %d\n",highpow2(x));
    */
    return 0;
}

