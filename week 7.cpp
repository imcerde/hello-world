#include<stdio.h>
void Func1(double x){
	int a=x;
	double b=x-a;
	printf("��������Ϊ��%d\n",a);
	printf("С������Ϊ��%lf\n",b);
}
void Func2(){
	double a1,b1,c1;
	double a2,b2,c2;
	printf("���������뷽��һx,y��ϵ���ͳ����\n");
	scanf("%lf%lf%lf",&a1,&b1,&c1);
	printf("���������뷽�̶�x,y��ϵ���ͳ����\n"); 
	scanf("%lf%lf%lf",&a2,&b2,&c2);
	if(a2*b1==a1*b2){
		printf("x,y��Ψһ�⡣"); 
	}
	else{
		double x,y;
		x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
		y=(a1*c2-a2*c1)/(a2*b1-a1*b2);
		printf("x=%lf\n",x);
		printf("y=%lf\n",y);
	}
} 
int Func3(double x){
	int y=x;
	double z=x-y;
	if(z>=0.5){
		x+=1-z;
	}
	else{
		x-=z;
	} 
	return x;
}
int main(){
	double x;
	printf("������һ����:\n");
	scanf("%lf",&x); 
	Func1(x);
	int a=Func3(x);
	printf("���������Ϊ��%d\n",a);
	Func2();
	return 0; 
} 
