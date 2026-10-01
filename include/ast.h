#ifndef AST_H
#define AST_H

#include <stdbool.h>
#include <stddef.h>

// Abstract Syntax Tree node structure
struct AstNode {
    int type; // Type of the node
    union {
        int value; // For integer literals
        char* value; // For string literals
        struct AstNode* child; // For nested nodes
    } data;
};

// Function prototypes
void parseAst(struct AstNode* node, char* code);
void freeAst(struct AstNode* node);

#endif // AST_H