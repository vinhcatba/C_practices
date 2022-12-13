#include <stdio.h>

int main(){
    char a[200];
    printf("Enter the input string\n");
    scanf("%s", a);
    int i =0;
    while(a[i+1]){
        int j=i+1;
        while(a[j]){
            if(a[j] < a[i]){
                char c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            j++;
        }
        i++;
    }
    printf("The letter frequency is\n");
    i=0;
    while(a[i]){
        int count =0;
        int j=i;
        while(a[j] == a[i]){
            count++;
            j++;
        }
        printf("%c %d\n", a[i], count);
        i+=count;
    }
    return 0;
}