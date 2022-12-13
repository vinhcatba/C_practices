#include <stdio.h>

int main(){
    char a[10], b[10];
    scanf("%s%s",a, b);
    int i=0, count=0;
    while(a[i] != 0 && a[i] != 0){
        if(a[i] != b[i]) count++;
        i++;
    }
    if(a[i] != b[i] && (a[i] == 0 || b[i] == 0)) printf("%s IS WRONG\n", b);
    else{
        if(count == 0){
            printf("%s IS CORRECT\n", b);
        }
        else if (count <= 2){
            printf("%s IS ALMOST CORRECT\n", b);
        }
        else printf("%s IS WRONG\n", b);
    }
    return 0;
}