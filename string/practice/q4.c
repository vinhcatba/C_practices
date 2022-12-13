#include <stdio.h>
#include <stdlib.h>

int findStringLength(char *a){
    int len=0;
    while(a[++len]);
    return len;
}

char *findStringReverse(char *a){
    int len = findStringLength(a);
    char *b = (char *)malloc((len+1)*sizeof(char));
    for(int i=0; i<len; i++){
        b[i] = a[len-1-i];
    }
    b[len] = 0;
    return b;
}

char *concatenateStrings(char *a, char *b){
    int alen, blen;
    alen = findStringLength(a);
    blen = findStringLength(b);
    char *c = (char *)malloc((alen+blen+1)*sizeof(char));
    for(int i=0; i<alen; i++){
        c[i] = a[i];
    }
    for(int i=alen; i<alen+blen; i++){
        c[i] = b[i-alen];
    }
    c[alen+blen] = 0;
    return c;
}

int compareStrings(char *aptr, char *bptr){
    while(*aptr == *bptr && *aptr != 0){
        aptr++;
        bptr++;
    }
    
    if(*aptr < *bptr) return -1;
    else if(*aptr > *bptr) return 1;
    return 0;
}


int main(){
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    printf("The length of the first string is %d\n", findStringLength(a));
    printf("The length of the second string is %d\n", findStringLength(b));
    printf("The reverse of the first string is %s\n", findStringReverse(a));
    printf("The reverse of the second string is %s\n", findStringReverse(b));
    printf("The concatenated string is %s\n", concatenateStrings(a, b));
    int cmp = compareStrings(a, b);
    if(cmp == 0) printf("Both the input strings are the same\n");
    else printf("%s appears before %s\n", (cmp<0)?a:b, (cmp<0)?b:a);
    return 0;
}