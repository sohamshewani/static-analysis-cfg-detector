#ifndef REPORT_H
#define REPORT_H

#include <stdbool.h>
#include <stdio.h>

// Report structure
struct Report {
    char* filename; // Source code filename
    bool has_dead_code; // True if dead code is found
    bool has_memory_leaks; // True if memory leaks are found
};

// Function prototypes
void generateReport(struct Report* report);

#endif // REPORT_H