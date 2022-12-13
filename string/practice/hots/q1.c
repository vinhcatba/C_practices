#include <stdio.h>

int main(){
    char str[20], result[20];
    printf("Enter the string\n");
    scanf("%s", str);
    int i =0, j=0;
    while(str[i] != 0){
        if(str[i]>= 'A' && str[i] <= 'Z' ){
            str[i] += 32;
        }
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                i++;
                continue;
            default:
                result[j++] = '.';
                result[j] = str[i];
                result[j+1] = 0;
                break;
        }
        i++;
        j++;
        
    }
    printf("The resultant string\n%s", result);
    return 0;
}