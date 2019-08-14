#include<stdio.h>

void main()
{
    char str[100];
    int c=0,e,f=0;
    printf("Enter any string\n");
    gets(str);
    int Operator(char ch)
    {
      if (ch == '+' || ch == '-' || ch == '*' ||
          ch == '/' || ch == '>' || ch == '<' ||
          ch == '=')
          return (1);
     else
       return (0);
    }

    while(1)
    {
        if(str[c]=='\0')
        {
            break;
        }
        e=Operator(str[c]);
        if(e==1)
        {
            printf("%c is operator\n",str[c]);
            f++;
        }
        c++;
    }
    if(f==0)
    {
        printf("There is no operator");
    }
}
