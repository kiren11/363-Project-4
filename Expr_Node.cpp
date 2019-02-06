// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Node_Vsitor.h"

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout

//constructor
Expr_Node::Expr_Node(char oper, Expr_Node left, Expr_Node right) {
    operator_ = oper;
    left_ = left;
    right_ = right;
}

//evaluate the expression and return a result
int Expr_Node::eval() const {

    //final answer
    int result;

    switch (operator_) {

        //adding operation
        case '+': 
            result = left_->eval() + right_->eval();
            break;

        //subtraction operation
        case '-': 
            result = left_->eval() - right_->eval();
            break;

        //division operation
        case '/': 
            result = left_->eval() - right_->eval();
            break;

        //multiplication operation
        case '*': 
            result = left_->eval() - right_->eval();
            break;

        //mod operation
        case '%': 
            result = left_->eval() - right_->eval();
            break;
        
        //number operation
        case '#': 
            result = left_->eval() - right_->eval();
            break;
     }

     return result;
}

//accept method
Expr_Node::accept(Expr_Node_Visitor & v) {
    v.Visit(this);
}

//destructor
Expr_Node::~Expr_Node(void) {
    delete left_;
    delete right_;
}

