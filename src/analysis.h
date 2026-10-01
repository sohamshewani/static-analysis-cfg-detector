#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <stdbool.h>
#include <stddef.h>
#include "cfg.h"
#include "report.h"

void checkForDeadCode(struct CfgNode* head);
void checkForMemoryLeaks(struct CfgNode* head);

#endif // ANALYSIS_H