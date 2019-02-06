// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Tree_Builder.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout

//constructor
Expr_Tree_Builder::Expr_Tree_Builder(void)
{

}

Expr_Tree_Builder::get_expression (void) 
{
    
}

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
    this->tree_ = new Expr_Tree();
}