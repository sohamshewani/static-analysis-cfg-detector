#ifndef CFG_BUILDER_H
#define CFG_BUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include "cfg.h"
#include "ast.h"

void buildCfg(struct CfgNode* head, struct AstNode* root);
void freeCfg(struct CfgNode* head);

#endif // CFG_BUILDER_H