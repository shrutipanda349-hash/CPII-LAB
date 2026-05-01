/*Define a function swapDistance() for the structure defined in question no.2, to 
swap the content of two Distance variables*/
#include<stdio.h>
struct distance
{
	int km;
	int m;
	int cm;
};
main()
{
	struct distance d1={10,2,3};
	struct distance d2={23,7,5};
	printf("BEFORE SWAPPING:\n");
	printf("d1=%dkm %dm %dcm\n",d1.km,d1.m,d1.cm);
	printf("d2=%dkm %dm %dcm\n",d2.km,d2.m,d2.cm);
	swapDistance(&d1,&d2);
	printf("AFTER SWAPPING:\n");
	printf("d1=%dkm %dm %dcm\n",d1.km,d1.m,d1.cm);
	printf("d2=%dkm %dm %dcm\n",d2.km,d2.m,d2.cm);
}
void swapDistance(struct distance *d, struct distance *b)
{
	int t;
	t=d->km;
	d->km=b->km;
	b->km=t;
	t=d->m;
	d->m=b->m;
	b->m=t;
	t=d->cm;
	d->cm=b->cm;
	b->cm=t;
	
}

