#include<stdio.h>
void Func1(double x){
	int a=x;
	double b=x-a;
	printf("整数部分为：%d\n",a);
	printf("小数部分为：%lf\n",b);
}
void Func2(){
	double a1,b1,c1;
	double a2,b2,c2;
	printf("请依次输入方程一x,y的系数和常数项：\n");
	scanf("%lf%lf%lf",&a1,&b1,&c1);
	printf("请依次输入方程二x,y的系数和常数项：\n"); 
	scanf("%lf%lf%lf",&a2,&b2,&c2);
	if(a2*b1==a1*b2){
		printf("x,y无唯一解。"); 
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
	printf("请输入一个数:\n");
	scanf("%lf",&x); 
	Func1(x);
	int a=Func3(x);
	printf("四舍五入后为：%d\n",a);
	Func2();
	return 0; 
} 
