// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"
#include <stdexcept> //exceptions
#include <iostream> //cout, cin

//default constructor
template <typename T>
Stack <T>::Stack (void)
: data_(0), max_size_(10), cur_size_(10)
{   
    int topStack = -1;
    this->data_ = Array<T>();
}

//copy constructor
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
    this->max_size_ = stack.max_size_;
    this->cur_size_ = stack.cur_size_;

    this->data_ = Array<T>(stack.cur_size_);

    for (int i = 0; i < this->max_size_; i++)
    {
      this->data_[i] = stack[i];
    }

   this->data_.top = stack.top;
}

//destructor
template <typename T>
Stack <T>::~Stack (void)
{   
    
}   

//assignment operator
template <typename T>
const Stack<T> & Stack<T>:: operator = (const Stack & rhs) {
    
    //self assignment check
    if (this == &rhs)
    {
        return *this;
    }

    if(this->max_size_ < rhs.size())
    {
        delete [] this->data_;

        this->data_ = Array<T>(rhs.size());
    }

    this->cur_size_ = rhs.size();
    this->max_size_ = rhs.size();

    for(size_t i = 0; (i < this->cur_size_); i++)
    {
       this->data_[i] = rhs.data_[i];
    }
}

//push value to stack
template <typename T>
void Stack<T>::push (T element)
{   
    //only push if there is space
    if (this->top() >= (this->max_size_ - 1))
    {
        std::cout<<"Cannot push onto empty element"<<std::endl;
    } else {    
        
        ++topStack;
        this->data_[topStack] = element;
    }
    
    //need to resize and make bigger
    this->data_.resize(cur_size_ + 1);
}

//pop value off of stack
template <typename T>
void Stack<T>::pop (void)
{   
    int temp;

    //check if stack is empty - otherwise throw exception
    try {
        if(is_empty()) {
            throw Stack<T>::empty_exception("Stack is empty, no top");
        }
    } catch (const std::exception& msg) {
        std::cout<<"Stack is empty, no top"<<std::endl;
    }

    temp = this->data_[topStack];

    //otherwise pop
    --topStack;

    //TODO: change current size?
}

//clear items from array
template <typename T>
void Stack<T>::clear (void)
{   
    //pop until stack is empty
    while(this->top != -1)
    {
        this->data_.pop();
    }
}
