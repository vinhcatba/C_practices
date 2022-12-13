#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter the name\n");
    scanf("%s", a);
    printf("The number of letters in the name is %d", strlen(a));
    return 0;
}
