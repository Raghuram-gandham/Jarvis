#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int num_inputs = 1024;
int ret;
char input[];

int main(){

    input[num_inputs];

    // For exiting when clicking Ctrl+D
    while(1){
        printf("Jarvis> ");
        if (fgets(input, num_inputs, stdin) == NULL) {
            printf("\nExiting Jarvis...\n");
            break;    
    } 

    // Remove newline character
    input[strcspn(input, "\n")] = '\0';

    // Run the actual system
    ret = system(input);
    if (ret == -1) {
        perror("system");
    }


}