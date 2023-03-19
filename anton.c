#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    fgets(str, 50, stdin);

    int alphabets[26]={0};
    
    for(int i=1; i<strlen(str)-2; i++)
    {
        if(str[i]!=',' && str[i]!=' ')
        {
            alphabets[str[i]-'a']++;
        }
    }
    for(int i=0; i<26; i++)
    {
        printf("%d) %c->%d\n", i, i+'a', alphabets[str[i]]);
    }

    return 0;
}