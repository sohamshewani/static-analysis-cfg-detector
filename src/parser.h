#ifndef PARSER_H
#define PARSER_H

#include <stdbool.h>
#include <stddef.h>
#include "ast.h"

void parseAst(struct AstNode* node, char* code);
void freeAst(struct AstNode* node);

#endif // PARSER_H