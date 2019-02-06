// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Eval_Expr_Tree.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


Eval_Expr_Tree::Eval_Expr_Tree(void)
{

}

Eval_Expr_Tree::Visit (const Addition_Node & node)
{
  // COMMENT The accept() method takes a visitor, and not
  // the node. This should be a compilation error here.
  //RESPONSE: changed nodes to visitor object
  this->result_ = node.accept(Expr_Node_Visitor & v);
}

Eval_Expr_Tree::Visit (const Subtraction_Node & node)
{
  // COMMENT The accept() method takes a visitor, and not
  // the node. This should be a compilation error here.
  //RESPONSE: changed nodes to visitor object
  this->result_ = node.accept(Expr_Node_Visitor & v);
}

Eval_Expr_Tree::Visit (const Multiplication_Node & node)
{
  // COMMENT The accept() method takes a visitor, and not
  // the node. This should be a compilation error here.
  //RESPONSE: changed nodes to visitor object
  this->result_ = node.accept(Expr_Node_Visitor & v);
}3

Eval_Expr_Tree::Visit (const Division_Node & node)
{
  // COMMENT The accept() method takes a visitor, and not
  // the node. This should be a compilation error here.
  //RESPONSE: changed nodes to visitor object
  this->result_ = node.accept(Expr_Node_Visitor & v);
}

// COMMENT: Do not return a value from the accept () of visit () methods
// in the Visitor pattern. This approach implies that all visit and accept
// methods must return a value, which may not always be the case. Instead,
// accumulate state in the visitor object, and access the state as needed.
// Response: removed return value

int Eval_Expr_Tree::Visit (const Number_Node & node)
{
  
}

//return the final result
int Eval_Expr_Tree::result(void) const 
{

  return this->result_;
  
}

Eval_Expr_Tree::~Eval_Expr_Tree (void )
{

}