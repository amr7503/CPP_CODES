#include<studio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping a=%d and b=%d\n");
	c=a;
	a=b;
	b=c;
	printf("After swapping a=%d and b=%d\n");
	return 0;
}
