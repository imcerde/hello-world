#include<stdio.h>
void Equivalence(double x,double y);
double Max(double x,double y);
int main(){
	double a,b,n;
	scanf("%lf%lf",&a,&b);
	Equivalence(a,b);
	n=Max(a,b);
	printf("����Ϊ��%g\n",n);
} 
void Equivalence(double x,double y){
	if(x==y){
		printf("����������ȡ�\n"); 
	}
	else{
		printf("�����������ȡ�\n"); 
	}
} 
double Max(double x,double y){
	if(x>=y){
		return x;
	}
	else if(x<y){
		return y;
	}
}

