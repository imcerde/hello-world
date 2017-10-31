#include<stdio.h>
#include<math.h>
void Year(int year);
void Rank(float x,float y,float z);
void f();
int main(){
	int year,n;
	float x,y,z;
	printf("请输入三个数字：\n");
	scanf("%f%f%f",&x,&y,&z); 
	Rank(x,y,z);
	printf("请输入年份："); 
	scanf("%D",&year);
	Year(year);
	f();
	return 0;
} 
void Rank(float x,float y,float z){
	float a[3]={x,y,z};
	float b;
	for(int i=0;i<2;i++){
		for(int j=i+1;j<3;j++){
			if(a[i]>a[j]){
			b=a[i];
			a[i]=a[j];
			a[j]=b;
			}
		}
	}
	for(int i=0;i<3;i++){
		printf("%g\t",a[i]);
	}
	printf("\n");
}
void Year(int year){
	if(year%400==0||(year%100!=0&&year%4==0)){
		printf("%d年是闰年。\n",year);
	}
	else{
		printf("%d年是平年。\n",year); 
	}
}
void f(){
	for(int i=1;i<10000;i++){
		int a,b,sum;
		do{
			a=i%10;
			b=i/10;
			if(a==1){
				sum++;
			}
		}while(b>10);
		if(i==sum){
			printf("%d=f(%d)\n",i,i);
		}
	}
}
