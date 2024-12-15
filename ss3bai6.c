#include<stdio.h>
int main(){
	int base,height,area;
	printf("Please enter the length of the base and the height of the triangle to calculate its area ");
	scanf("%d  %d",&base,&height);
	area=base*height/2;
	printf("The calculated area of the triangle is %d",area);
	return 0;
}
