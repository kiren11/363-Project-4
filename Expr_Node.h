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

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Expr_Node_Visitor.h"

#include <fstream>
#include <iostream>

class Expr_Node { 

public:   
    
    Expr_Node (void);   
    
    virtual ~Expr_Node (void);  

    //used to traverse the tree
    virtual int eval (void) = 0;   
    
    virtual void preorder (std::ostream &) = 0;

    virtual void print_inorder (std::ostream &) = 0;     

    //used to traverse the tree
    virtual void accept () = 0;
    
};

#endif //!defined _EXPR_NODE_H_