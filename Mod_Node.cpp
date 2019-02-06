// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Node.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


//constructor
Mod_Node::Mod_Node() {

}

Mod_Node::accept(Expr_Node_Visitor & v) 
{
    v.Visit (*this);
}

//destructor
Mod_Node::~Mod_Node(void) {

}