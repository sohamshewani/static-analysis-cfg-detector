#ifndef CONFIG_H
#define CONFIG_H

// Configuration settings for the static-analysis-cfg-detector

// Defines the maximum size of source code that can be processed
#define MAX_SOURCE_SIZE 1000000

// Defines the maximum number of control flow nodes in a graph
#define MAX_CFG_NODES 100000

// Defines the maximum number of edges in a control flow graph
#define MAX_CFG_EDGES 100000

// Defines the maximum number of statements in an AST node
#define MAX_AST_STMTS 100000

// Defines the maximum number of variables in an AST node
#define MAX_AST_VARS 100000

// Defines the maximum number of types in the type system
#define MAX_TYPES 100000

#endif // CONFIG_H