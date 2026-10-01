#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cfg_builder.h"
#include "ast.h"
#include "cfg.h"

void buildCfg(struct CfgNode* head, struct AstNode* root) {
    // Implementation of building control flow graph
}

void freeCfg(struct CfgNode* head) {
    struct CfgNode* current = head;
    while (current != NULL) {
        struct CfgNode* next = current->next;
        free(current->ast_node->data.value);
        free(current->ast_node->data.child);
        free(current->ast_node);
        free(current);
        current = next;
    }
}
