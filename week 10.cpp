#include<stdio.h>
bool su(int i);
int main(){
	int n=0;
	int SUM=0;
	int sum=0,mul=1,sqs=0;
	int a;
	int b;
	int max=0;
	for(int i=100;i<10000;i++){
		if(su(i)){
			b=i;
			sum=0;mul=1;sqs=0;
			while(b!=0){
				a=b%10;
				sum+=a;
				mul*=a;
				sqs+=(a*a); 
				b=b/10;
			}
			if(su(sum)&&su(mul)&&su(sqs)){
				n++;
				SUM+=i;
				max=i;			
			}
		}
	}
	printf("%d\n%d\n%d\n",n,SUM,max);
}
bool su(int i){
	int r=0;
	if(i==0||i==1){
		return false;
	}
	for(int j=2;j<i;j++){
		r=i%j;
		if(r==0){
			return false;
		}
	}
	return true;
} 
