#include<stdio.h>
#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
#define n 50000
int main(void){
	char a[n],b[n];
	int b1;
	gets(a);
	int a1,i, j=0, result=0,sum=0,carry=0;
	int len=strlen(a);
	for(i=len-1;i>=0;i--){
		a1=a[i]-'0';
		sum=a1*3+carry;
		carry=sum/10;
		result=sum%10+'0';
		b[j++]=result;
	}
	strrev(b);
	puts(b);
}
