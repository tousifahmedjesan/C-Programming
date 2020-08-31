#include <stdio.h>
 int main()
 {
     int i, j, k, n, c=1;
     
     scanf ("%d",&n);
     
     int p[n], q[n], r[n];
     
     for (i=0; i<n; i++)
     	scanf("%d",&p[i]);
     	
     
     for (i=0; i<n-2; i++) 
     	for(j=i+1 ; j<n-1; j++)
     		for(k=j+1; k<n; k++)
     			printf("%d%d%d\n",p[i],p[j],p[k]);
 }
