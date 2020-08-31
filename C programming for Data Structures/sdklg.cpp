#include<stdio.h>
#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
int math(char a[]){
	int b1,len,sum=0;
	int i;
	len = strlen(a);
	int len2=len-1;
	for(i=0;i<len;i++){
		b1=a[i]-'0';
		b1*=pow(10,len2--);
		sum+=b1;
	}
	return sum;
}
int main (void){
	char a[10],b[10];
	gets (a);
	gets(b);
	int a1,a2;
	a1=math(a);
	a2=math(b);
	printf("%d",a1+a2);
}
