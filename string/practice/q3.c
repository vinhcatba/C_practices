#include <stdio.h>

int main(){
    char a[100], b[100];
    printf("Enter the actual word\n");
    scanf("%s", a);
    printf("Enter the word the student has typed\n");
    scanf("%s", b);
    int len = 0;
    while(a[++len] !=0);
    for(int i=0; i<len; i++){
        if(a[i] != b[len-i-1]) {
            printf("It is wrong");
            return 0;
        }
    }
    printf("It is correct");
    return 0;
}