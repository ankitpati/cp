#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *getstr()
{
    unsigned n;
    int c;
    char *s;
    if(!(s=malloc(1))) return NULL;
    for(n=0; (c=getchar())!=EOF && c!='\n'; s[n++]=c)
        if(!(s=realloc(s, n+2))) return NULL;
    s[n]='\0';
    return s;
}

char *revword(char *s)
{
    unsigned i, j, n;
    char t;
    while(isspace(*s)) ++s;
    for(n=0; s[n] && !isspace(s[n]); ++n);
    for(i=0, j=n-1; i<j; ++i, --j){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    return s+n;
}

int main()
{
    char *s;
    printf("Enter a string:\n");
    if(!(s=getstr())) return 13;
    while(revword(s));
    printf("Words Reversed:\n%s\n", s);
    return 0;
}
