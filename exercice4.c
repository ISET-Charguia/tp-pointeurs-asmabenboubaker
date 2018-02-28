#include<stdio.h>
#include<stdlib.h>
void *malloc(size_t taille) ;
int main (void)
{int A[20],n, *A,*p1,*p2;
	int aide;

 puts("donner un entier n");
	scanf("%d",&n);
	
	for(p1=A;p1<A+n;p1++)
	{puts("donner un entier");
	scanf("%d",p1);
    }
		p2=(A+n)-1;
		for(p1=A;p1<A+n;p1++)
		{
			aide=*p1;
		    *p1=*p2;
		    *p2=*aide;
           p2=p2-1;
         }
for(p1=A;p1<A+n;p1++)
		printf("%d\t",*p1);
		return 0;
		}
