#include <stdio.h>

int main(){
    char str[20];
    printf("Enter the input string\n");
    scanf("%s", str);
    int i=0;
    while(str[i] != 0){
        int j = i+1;
        while(str[j] != 0){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            j++;
        }
        i++;
    }
    
    printf("The output string is %s\n", str);
    return 0;
}