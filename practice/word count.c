#include <stdio.h>
#include <string.h>

int main() {
   char s1[1000];
   char s2[] = "the";
   char s3[] = "an";
   char s4[] = "a";
   char s5[] = "The";
   char s6[] = "An";
   char s7[] = "A";
   char s8[] = "THE";
   char s9[] = "AN";
   printf ("Enter a sentence: ");
	gets(s1);
   int n = 0;
   int m = 0;
   int times = 0;
   int len = strlen(s2);
   int len1 = strlen(s3);
   int len2 = strlen(s4);

   while(s1[n] != '\0') {

      if(s1[n] == s2[m] || s1[n] == s3[m] || s1[n] == s4[m] || s1[n] == s5[m] || s1[n] == s6[m] || s1[n] == s7[m] || s1[n] == s8[m] || s1[n] == s9[m]) {
         while(s1[n] == s2[m] || s1[n] == s3[m] || s1[n] == s4[m] || s1[n] == s5[m] || s1[n] == s6[m] || s1[n] == s7[m] || s1[n] == s8[m] || s1[n] == s9[m] && s1[n] !='\0') {
            n++;
            m++;
         }

         if(m == len || m == len1 || m == len2 && (s1[n] == ' ' || s1[n] == '\0')) {
            times++;
         }
      } 
	  
	  else {
         while(s1[n] != ' ') {
            n++;
            if(s1[n] == '\0')
            break;
         }
      }		
      n++;
      m=0;
   }

   if(times > 0) {
      printf("Article appears %d time(s)\n",times);
   } else {
      printf("Article does not appear in the sentence.\n");
   }
   
   return 0;
}

