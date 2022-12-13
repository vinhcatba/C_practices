#include <stdio.h>

int main(){
    char a[200];
    printf("Enter the input string\n");
    scanf("%s", a);
    int i=0, j=0;
    char *ptr = a;
    while(a[i]){
        while(a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u' ) i++;
        *(ptr+j) = a[i];
        i++;
        j++;
    }
    ptr[j] = 0;
    printf("The output string is %s\n", a);
    return 0;
}