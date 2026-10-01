#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"
#include "ast.h"

void parseAst(struct AstNode* node, char* code) {
    // Implementation of AST parsing logic
}

void freeAst(struct AstNode* node) {
    if (node == NULL) return;
    free(node->data.value);
    free(node->data.child);
    free(node);
}
