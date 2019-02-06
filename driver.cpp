#include "Binary_Expr_Node.h"
#include "Eval_Expr_Tree.h"
#include "Print_Inorder_Expression.h"
#include "Expr_Tree_Builder.h"

#include "Stack.h"

#include <sstream>
#include <iostream>

//helper function - determines whether input is operator
bool isOperator(const std::string & infix)
{
    if(infix == "+" || infix == "-" || infix == "/" || infix == "*" || infix == "%")
    {
        return true;
    }

    return false;
}

//helper function - to see if it input is a number
bool isOperand(const std::string & infix)
{
    if(isOperator(infix) && infix != "("  && infix != ")")
    {
      return true;
    }

    return false;
}

//set precendence for operators
int setOpPriority(const std::string infix) 
{
    int priority = -1;

    if(infix == "+") 
    {      
      priority = 1;

    } else if (infix == "-") {
      priority = 1;

    } else if (infix == "*") {
      priority = 2;

    } else if (infix == "/") {
      priority = 2;

    } else if (infix == "%") {
      priority = 2;

    }

    return priority;
}

//remove ops with great/equal priority from stack and push to output
void operatorInput(char token)
{ 

  // if input is not equal to left paren
  while (!operations.empty() && operators.top() != '(' )
  { 
    //set top to top of stack
    char top = operations.top();

    //compare priorities
    if(setOpPriority(top) < setOpPriority(token))
    {
      break;
    }

    postfix << top << ' ';

    operations.pop();
  }

  operations.push(token);
}

//pop all elements til left paren is found
void rightParen()
{
  while (!operations.empty() && operations.top()( != '(') )
  {
    char top = operations.top();

    postfix << top << ' ';

    operations.pop();
  }

  //pop off the left paren
  operations.pop();
}

// COMMENT: You are to implement a complete program. Right now, your
// assignment is incomplete. Unfortunately, it is hard to tell what
// has and has not been implemented to warrant any feedback.
//RESPONSE: comments have been addressed that have been left

int main (int argc, char * argv [])
{

  std::cout<<"start of testing..."<<std::endl;

  //create a stack object to hold operators
  Stack operations;

  //create stack object to hold operands
  Stack operands;

  //build a new tree
  Binary_Expr_Node * expr_tree =  new Expr_Tree_Builder();

  //create parser
  std::istringstream input(infix);
  std::string token;

  b.start_expression();

  //parse through input
  while (!input.eof())
  {
      input >> token;

      //build the operation nodes
      //addition operation
      if(token == "+") {
          this->builder_.build_add_operator();

          // COMMENT You should not be saving any part of the expression
          // in the director's code.
          
          //RESPONSE: removed push statement
          operations.push(token);

      // subtraction operation
      } else if (token == "-") {
          this->builder_.build_subtract_operator();

          // COMMENT You should not be saving any part of the expression
          // in the director's code.
          
          //RESPONSE: removed push statement

      // multiplication operation
      } else if (token == "*") {
          this->builder_.build_multiply_operator();

          // COMMENT You should not be saving any part of the expression
          // in the director's code.
          
          //RESPONSE: removed push statement

      // division operation
      } else if (token == "/") {
          this->builder_.build_divide_operator();

          // COMMENT You should not be saving any part of the expression
          // in the director's code.
          
          //RESPONSE: removed push statement

      // mod operation
      } else if (token == "%") {
          this->builder_.build_mod_operator();

          // COMMENT You should not be saving any part of the expression
          // in the director's code.
          
          //RESPONSE: removed push statement

      //otherwise its a number
      } else {
          this->builder_.build_number();
      }

    return true;
  }

  //make new instance of calculator class
  // Calculator * calc = new Calculator(Expr_Tree_Builder & builder);

  Eval_Expr_Tree eval;

  // 5 + 4
  //make the nodes
  Binary_Expr_Node * n1 = new Number_Node (5); 
  Binary_Expr_Node * n2 = new Number_Node (4); 
  Binary_Expr_Node * expr = new Add_Node (n1, n2); 
  int result = expr->eval (); 
  

  //evaluate the expression tree
  expr_tree->accept (eval);
  int result = eval.result();

  //print the tree in infix format
  Print_Inorder_Expression printer (std::cout);
  expr_tree->accept (printer);

  delete expr;


  std::cout<<"end of testing..."<<std::endl;
  return 0;
}