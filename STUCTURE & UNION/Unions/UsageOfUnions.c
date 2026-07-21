#include <stdio.h>

union test {
	int x;// initialize required variables
    int y;
};

	
int main()
{
	union test t;
	printf("x: ");
	//accept user input for x and assign it to the union variable x 
	scanf("%d", &t.x);
	
	printf("After making x = %d:\nx= %d y= %d\n",t.x, t.x, t.y);
	printf("y: ");
	//accept user input for y and assign it to the union variable y
	scanf("%d",&t.y);



	printf("After making y = %d:\nx= %d y= %d",t.y, t.x, t.y);
 	return 0;
}
