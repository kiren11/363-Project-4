// $Id: Binary_Expr_Node.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout

#include "Binary_Expr_Node.h"


//constructor
Binary_Expr_Node::Binary_Expr_Node() {
    this->left_ = nullptr;
    this->right_ = nullptr;
    
       
}

//evaluate the binary expression nodes
Binary_Expr_Node::eval() {
    
}

//destructor
Binary_Expr_Node::~Binary_Expr_Node(void) {
    delete left_;
    delete right_;   
}