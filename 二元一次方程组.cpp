#include<stdio.h>
int main(void){
	double a1,b1,c1;
	double a2,b2,c2;
	printf("���������뷽��һx,y��ϵ���ͳ����");
	scanf("%lf%lf%lf",&a1,&b1,&c1);
	printf("���������뷽�̶�x,y��ϵ���ͳ����"); 
	scanf("%lf%lf%lf",&a2,&b2,&c2);
	if(a2*b1==a1*b2){
		printf("x,y��Ψһ�⡣"); 
	}
	else{
		double x,y;
		x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
		y=(a1*c2-a2*c1)/(a2*b1-a1*b2);
		printf("x=%lf",x);
		printf("y=%lf",y);
	}
	return 0;
}

