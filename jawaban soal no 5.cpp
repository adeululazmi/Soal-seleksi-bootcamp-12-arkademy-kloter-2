#include <stdio.h>
#include <string.h>
 
void stringcount(char *s)
{
    int i,vowels=0;
	for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
           
        }
 
 	}
   
    printf("vowels = %d\n",vowels);
 	
}
int main()
{
 
    char s[1000];  
  
    printf("Masukan string: ");
    gets(s);
    
 
    stringcount(s);
     
     
}
