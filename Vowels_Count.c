 
#include<stdio.h>
int main()
{
    char s[101];
    int c=0;
    scanf("%[^
]s", &s);
    for(int i=0; s[i] != NULL; i++)
    {
        int ch = (s[i]>'Z') ? s[i]-32 : s[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        c++;
    }
    printf("%d", c);
}
 