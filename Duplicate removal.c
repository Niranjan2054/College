#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10] = "abcdefaha";
    int i,j,n1;
    n1=strlen(str);
    for (i=0;i<n1-1;i++){
        for(j=1+i;j<n1-1;j++){
            if(str[i]==str[j]){
                removeChar(str,str[j]);
                n1--;
                printf("%s\n",str);
            }
        }
    }
    printf("%s",str);
}
void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}
