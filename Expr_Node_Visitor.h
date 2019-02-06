// -*- C++ -*-
// $Id: Expr_Node_Visitor.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Division_Node.h
 *
 * $Id: Expr_Node_Visitor.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

#include "Expr_Node.h"

/**
 * @class Expr_Node_visitor
 *
 * Basic implementation of a expression node
 */
class Expr_Node_Visitor {
public:

    Expr_Node_Visitor (void);

    virtual ~Expr_Node_Visitor (void);

    //Methods for visiting concrete nodes
    virtual void visit (const Addition_Node & node);
    virtual void visit (const Subtraction_Node & node);
    virtual void visit (const Division_Node & node);
    virtual void visit (const Multiplication_Node & node);
    virtual void visit (const Mod_Node & node);
    virtual void visit (const Number Node & node);


#endif // !defined Expr_Node_Visitor