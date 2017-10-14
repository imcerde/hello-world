#include<stdio.h>
#include<float.h> 
int main(){
	int x=2.2;
	short y=0x7FFF;
	short z=0xFFFF;
	unsigned short w=0xFFFF;
	float u=0.177;
	printf("%d\n%d\n%d\n%d\n%f\n",x,y,z,w,u);
	printf("DBL_MAX=%le\n",DBL_MAX);
	printf("DBL_MIN=%le",DBL_MIN);
	return 0;
}
