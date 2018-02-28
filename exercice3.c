#include<stdio.h>
#include<stdlib.h>
void *malloc(size_t taille) ;
int main (void)
{int m,n, *A,*p,*B;

 puts("donner un entier n");
	scanf("%d",&n);
	A=malloc(n);
	if(A!=NULL)
	{for(p=A;p<A+n;p++)
	{puts("donner un entier");
	scanf("%d",p);
    }
	
	}
    B=malloc(m);
    if(B!=NULL)
	{for(p=B;p<B+m;p++)
	{puts("donner un entier");
	scanf("%d",p);
    }
	}
for(p=A;p<A+n;p++)
		printf("%d\t",*p);
for(p=B;p<B+n;p++)
		printf("%d\t",*p);
	free(B);
	return 0;
}


