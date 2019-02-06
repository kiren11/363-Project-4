// -*- C++ -*-
// $Id: Binary_Expr_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Binary_Expr_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"

/**
 * @class Binary_Expr_Node
 *
 * Basic implementation to provide functionality to subclasses that are binary operators
*/
class Binary_Expr_Node : public Expr_Node {

public:

    //constructor
    Binary_Expr_Node (void);

    //destructor
    virtual ~Binary_Expr_Node (void);

    //evaluate method
    virtual int eval (void);     

protected:
    char operator_;
    int value_;

    //children nodes
    Binary_Expr_Node * right_;
    Binary_Expr_Node * left_;
};

#endif //!defined _BINARY_EXPR_NODE_H_