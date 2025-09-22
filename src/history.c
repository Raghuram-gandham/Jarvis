#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "history.h"

#define HISTORY_FILE "data/history.txt"

static char *history[MAX_HISTORY];
static int history_count = 0;

// Add command to memory and file
void add_history(const char *command) {
    if (history_count < MAX_HISTORY) {
        history[history_count] = strdup(command);
        history_count++;
    }

    FILE *f = fopen(HISTORY_FILE, "a");
    if (f) {
        fprintf(f, "%s\n", command);
        fclose(f);
    }
}

// Print command history
void print_history(void) {
    for (int i = 0; i < history_count; i++) {
        printf("%d: %s\n", i + 1, history[i]);
    }
}
