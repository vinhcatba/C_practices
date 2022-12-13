#include <stdio.h>

int main(){
    char a[100], b[100] = {0};
    printf("Enter the string\n");
    scanf("%[^\n]s",a);
    int len = 0, bi=0;
    while(a[++len] != 0);
    char the[] = "the";
    for(int i=0; i<len; i++){
        char tok[4] = {0};
        int flag = 0;
        for(int j=i; j<len && j<i+3; j++){
            tok[j-i] = (a[j] >= 'A' && a[j] <= 'Z')?(a[j]+32):a[j];
            if(tok[j-i] != the[j-i]) break;
            else if (j-i == 2) {
                flag = 1;
            }
        }
        if(flag == 1){
            i+=3;
            continue;
        }
        b[bi++] = a[i];
    }
    bi--;
    b[bi] = (b[bi] == ' ')?0:b[bi];
    printf("Result string is\n%s", b);
    return 0;
}