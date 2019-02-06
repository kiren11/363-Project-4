// -*- C++ -*-
// $Id: Array.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Addition_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADDITION_NODE_H_
#define _ADDITION_NODE_H_

#include "Expr_Node_Visitor.h"
#include "Binary_Expr_Node.h"

/**
 * @class Addition_Node
 *
 * Basic implementation of a node that hold addition operator
 */
class Addition_Node : public Binary_Expr_Node {

public:

    virtual void accept(Expr_Node_Visitor & v);
    
};

#endif   // !defined _ADDITION_NODE_H_