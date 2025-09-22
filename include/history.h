#ifndef HISTORY_H
#define HISTORY_H

#define MAX_HISTORY 100

// Add a command to history (in memory + file)
void add_history(const char *command);

// Print the command history
void print_history(void);

#endif