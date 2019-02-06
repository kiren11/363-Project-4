// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Node_Visitor.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


//constructor
Addition_Node::Addition_Node() {

}

Addition_Node::accept(Expr_Node_Visitor & v) 
{
    v.Visit (*this);
}


//destructor
Addition_Node::~Addition_Node(void) {

}