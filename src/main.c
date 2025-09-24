#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "history.h"


int num_inputs = 1024;
int ret;

int main(){

    char input[num_inputs];

    while(1){

        // For exiting when clicking Ctrl+D
        printf("Jarvis> ");
        if (fgets(input, num_inputs, stdin) == NULL) {
            printf("\nExiting Jarvis...\n");
            break;    
        } 

        // Remove newline character
        input[strcspn(input, "\n")] = '\0';

        // Skip empty lines
        if (strlen(input) == 0) {
            continue;
        }

        // Save to history
        add_history(input);

        // Built-in: exit
        if (strcmp(input, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        }

        // Built-in: history
        else if (strcmp(input, "history") == 0) {
            print_history();
            continue;
        }

        // run as system command
        else {
            int ret = system(input);
            if (ret == -1) {
                perror("system");
            }
        }


    }

    return 0;

}