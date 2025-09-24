#include <stdio.h>
#include <string.h>
#include "ai.h"

void ai_process(const char *input) {
    if (strstr(input, "hello")) {
        printf("Jarvis AI: Hello, Master. How can I help you?\n");
    }
    else if (strstr(input, "how are you")) {
        printf("Jarvis AI: I am just code, but I am functioning perfectly!\n");
    }
    else if (strstr(input, "time")) {
        printf("Jarvis AI: Sorry, I can't tell the time yet.\n");
    }
    else {
        printf("Jarvis AI: I don't understand that (yet).\n");
    }
}