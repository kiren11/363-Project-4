// -*- C++ -*-
// $Id: Subtraction_Node.h 380 2010-02-08 05:10:33Z hillj $

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

#ifndef _SUBTRACTION_NODE_H_
#define _SUBTRACTION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Subtraction_Node
 *
 * Basic implementation of a node that hold subtraction operator
 */
class Subtraction_Node : public Binary_Expr_Node {

public:

    virtual void accept(Expr_Node_Visitor & v);
};

#endif   // !defined _SUBTRACTION_NODE_H_