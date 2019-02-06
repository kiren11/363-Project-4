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

#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_

#include "Expr_Node_Visitor.h"

/**
 * @class Array
 *
 * evaluates the expression tree by visiting elements using post-order traversal logic
 */
 
class Eval_Expr_Tree : public Expr_Node_Visitor {

public:

    Eval_Expr_Tree (void);

    virtual ~Eval_Expr_Tree (void);

    virtual void Visit (const Addition_Node & node);

    virtual void Visit (const Subtraction_Node & node);

    virtual void Visit (const Multiplication_Node & node);

    virtual void Visit (const Division_Node & node);

    virtual void Visit(const Mod_Node & node);

    virtual void Visit (const Num_Node & node);
    
    int result (void) const;


private:

    int result_;

    //other state for calculating result
};

#endif   // !defined _EVAL_EXPR_TREE_H_
