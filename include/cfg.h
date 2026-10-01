#ifndef CFG_H
#define CFG_H

#include <stdbool.h>
#include <stddef.h>

// Control Flow Graph structure
struct CfgNode {
    int node_id; // Unique ID for the node
    struct AstNode* ast_node; // Associated AST node
    bool is_entry; // True if it's an entry node
    bool is_exit; // True if it's an exit node
    bool is_dead; // True if it's a dead node
    bool is_memory_leak; // True if it's a memory leak node
    struct CfgNode* next; // Next node in the graph
};

// Function prototypes
void buildCfg(struct CfgNode* head, struct AstNode* root);
void freeCfg(struct CfgNode* head);

#endif // CFG_H