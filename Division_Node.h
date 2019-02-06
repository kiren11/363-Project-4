// -*- C++ -*-
// $Id: Division_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Division_Node.h
 *
 * $Id: Division_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Division_Node
 *
 * Basic implementation of a node that hold division operator
 */
class Division_Node : public Binary_Expr_Node {

public:

    virtual void accept(Expr_Node_Visitor & v);
};

#endif   // !defined _DIVISION_NODE_H_