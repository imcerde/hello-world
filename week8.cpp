#include<stdio.h>
void Equivalence(double x,double y);
double Max(double x,double y);
int main(){
	double a,b,n;
	scanf("%lf%lf",&a,&b);
	Equivalence(a,b);
	n=Max(a,b);
	printf("大数为：%g\n",n);
} 
void Equivalence(double x,double y){
	if(x==y){
		printf("这两个数相等。\n"); 
	}
	else{
		printf("这两个数不等。\n"); 
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

