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

#ifndef _PRINT_INORDER_TREE_H_
#define _PRINT_INORDER_TREE_H_


#include "Expr_Node_Visitor.h"

/**
 * @class Print Inorder Expression
 *
 *  prints the expression as an infix expression to the specified output
 */
 
class Print_Inorder_Expression : public Expr_Node_Visitor {

public:

    Print_Inorder_Expression (std::ostream & out);

    //destructor
    virtual ~Print_Inorder_Expression (void);

    virtual void Visit_Addition_Node (const Addition_Node & node);

    virtual void Visit_Subtraction_Node (const Subtraction_Node & node);

    virtual void Visit_Division_Node (const Division_Node & node);

    virtual void Visit_Multiplication_Node (const Multiplication_Node & node);

    virtual void Visit_Mod_Node (const Mod_Node & node);

    virtual void Visit_Number_Node (const Number_Node & node);

private:

    //output stream
    std::ostream out_;

};

#endif //!defined _PRINT_INORDER_TREE_H_