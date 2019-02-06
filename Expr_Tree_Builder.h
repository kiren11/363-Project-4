// -*- C++ -*-
// $Id: Eval_Expr_tree.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Eval_Expr_Tree.h
 *
 * $Id: Array.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Stack.h"
#include "Expr_Builder.h"

/**
 * @class Expr_Tree_Builder
 *
 * evaluates the expression tree by visiting elements using post-order traversal logic
 */
 
class Expr_Tree_Builder : public Expr_Builder {

public:

    Expr_Tree_Builder (void);

    virtual ~Expr_Tree_Builder(void)

    virtual void build_number (int n);

    virtual void build_add_operator (void);

    virtual void build_subtract_operator (void);

    virtual void build_division_operator (void);

    virtual void build_multiplication_operator (void);

    virtual void build_mod_operator (void);

    Expr_Tree * get_expression (void);

private:

    //make stack object
    Stack operStack;
    
    Expr_Tree * tree_;

};

#endif // !defined _EXPR_TREE_BUILDER_H_