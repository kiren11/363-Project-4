// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Node_Visitor.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


//constructor
Number_Node::Number_Node()
: Binary_Expr_Node(), value_(v) {

    //set pointers to null
    left_ = nullptr;
    right_ = nullptr;
}


Number_Node::accept(Expr_Node_Visitor & v) 
{
    v.Visit (*this);
}

//destructor
Number_Node::~Number_Node(void) {

}