
#include<stdio.h>
#include<string.h>
void main()
{   char str[10];
    int i,digit;
    printf("Input 10 characters:");
    for(i=0;i<10;i++)
	scanf("%c",&str[i]);
    digit=0;      
    for(i=0;i<10;i++)
       if(str[i]>='0'&&str[i]<='9')      /*��ǰ�ַ�Ϊ�����ַ�*/
	   digit++;                      
    printf("The number of digit is %d",digit);  
      
}
