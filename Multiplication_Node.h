// -*- C++ -*-
// $Id: Array.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Multiplication_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MULTIPLICATION_NODE_H_
#define _MULTIPLICATION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Multiplication_Node
 *
 * Basic implementation of a node that hold Multiplication operator
 */
class Multiplication_Node : public Binary_Expr_Node {

public:

    virtual void accept(Expr_Node_Visitor & v);

    //check if this goes here
    virtual int eval (int num1, int num2);
};

#endif   // !defined _MULTIPLICATION_NODE_H_