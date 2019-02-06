// -*- C++ -*-
// $Id: Number_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Mod_Node.h
 *
 * $Id: Number_Node.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Addition_Node
 *
 * Basic implementation of a number node
 */
class Number_Node : public Binary_Expr_Node {

public:

    virtual void accept(Expr_Node_Visitor & v);
};

#endif   // !defined _NUMBER_NODE_H_