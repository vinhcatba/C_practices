#include <stdio.h>

int main(){
    char a[50], b[50];
    printf("Enter the word\n");
    scanf("%s", a);
    printf("Enter the word the student has typed\n");
    scanf("%s", b);
    char *pa = a, *pb = b;
    int flag = 0;
    while(!(*pa == 0 && *pb == 0) ){
        if(*pa != *pb) {
            flag =1;
            break;
        }
        pa++;
        pb++;
    }
    if(flag) printf("It is wrong\n");
    else printf("It is correct\n");
    return 0;
}
