#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter the number of names\n");
    scanf("%d", &n);
    char **name = (char **)malloc(n*sizeof(char*));
    
    printf("Enter the names\n");
    for(int i=0; i<n; i++){
        *(name+i) = (char *)malloc(20);
        scanf("%s", *(name+i));
        
    }
    
    // sorting
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(strcmp( *(name+j), *(name+i)) < 0){
                char *t = *(name+j);
                *(name+j) = *(name+i);
                *(name+i) = t;
            }
        }
    }
    
    printf("The sorted name list is\n");
    for(int i=0; i<n; i++){
        printf("%s\n", *(name+i));
    }
    
    return 0;
}