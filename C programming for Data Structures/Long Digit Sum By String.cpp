#include<stdio.h>
#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
#define n 500
int main (void){
	char a[n],b[n],c[n],t[n];
	gets (a);
	gets(b);
	int lena, lenb, i,j,k=0,temp;
	lena =strlen(a);
	lenb =strlen(b);
	if(lena<lenb){
		temp=lena;
		lena=lenb;
		lenb=temp;
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
	}
	int a1,a2,a3,a4,a5,a6;
	int b1,b2,b3,b4,b5,b6;
	int sum=0,carry=0,result=0;
	temp=0;
	j=lenb-1;
	for(i=lena-1;i>=0;i--){
		if(j>=0){
			a1=a[i]-'0';
			b1=b[j--]-'0';
			sum=a1+b1+carry;
			carry=sum/10;
			result=sum%10+'0';
			c[k++]=result;
		}
		else{
			if(carry!=0){
				a1=a[i]-'0';
				sum=a1+carry;
				carry=sum/10;
				result=sum%10+'0';
				c[k++]=result;
			}
			else
			c[k++]=a[i];
		}
	}
	if(carry!=0)
	c[k++]=carry+'0';
	c[k]='\0';
	strrev(c);
	puts(c);
}
