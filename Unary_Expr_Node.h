// -*- C++ -*-
// $Id: Array.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Unary_Expr_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_


#include "BInary_Expr_Node.h"
/**
 * @class Unary_Expr_Node
 *
 * Basic implementation to provide functionality to subclasses that are unary operators
 */

class Unary_Expr_Node : public Expr_Node {

public:

    Unary_Expr_Node (void);

    virtual ~Unary_Expr_Node (void);

    //unary expr node only has one child
    virtual int eval (void) {
        
        if (this->child_) return this->child_->eval();
    }      

protected:

    Binary_Expr_Node * child_;
};

#endif //!defined _UNARY_EXPR_NODE_H_