#include <stdio.h>

int main(){
    char a[200];
    printf("Enter a line of string\n");
    scanf("%[^\n]s", a);
    int i=0, cv=0, cc=0, cd=0, cs=0;
    while(a[i]){
        a[i] = (a[i] >= 'A' && a[i] < 'Z')?a[i]+32:a[i];
        switch(a[i]){
            case 'a':
            case 'e':
            case 'o':
            case 'u':
            case 'i':
                cv++;
                goto addi;
            case '0' ... '9':
                cd++;
                goto addi;
            case ' ':
                cs++;
                goto addi;
            default:
                if((a[i] >= 'a' && a[i] < 'z'))
                    cc++;
            addi:
                i++;
                break;
        }
    }
    printf("Vowels: %d\n", cv);
    printf("Consonants: %d\n", cc);
    printf("Digits: %d\n", cd);
    printf("White spaces: %d\n", cs);
    
    return 0;
}