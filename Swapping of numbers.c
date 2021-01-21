#include <stdio.h>
#include <conio.h>

int main()
{
	int x,y,r;
	printf("Enter two numbers");
	scanf("%d %d",&x,&y);
	printf("The numbers are x=%d  y=%d", x,y);
	r=x;
	x=y;
	y=r;
	printf("\n After swapping x=%d  y=%d",x,y);
	getch();
	return 0;
}
