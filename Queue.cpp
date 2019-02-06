// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Queue.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//default constructor
template <typename T>
Queue<T>::Queue (void)
{
    this->data_ = Array<T>();
}

//copy constructor
template <typename T>
Queue<T>::Queue (const Queue & s)
: data_(0), start_(-1), end_(-1), max_size_(max_size_), cur_size_(cur_size_)
{
    this->data_ = Array<T>(10);

    for(int i = 0; i < this->max_size_; i++)
    {
      this->data_[i] = s[i];
    }
}

//destructor
template <typename T>
Queue<T>::~Queue (void)
{   

}

//enqueue - add elements to the queue
template <typename T>
void Queue<T>::enqueue (T element)
{       
    //if queue is full, resize
    if((this->start_ == 0 && this->end_ == size - 1) || (this->end_ == (this->start_ - 1) % (this->size - 1))) {   
        this->data_.resize(this->cur_size_+ 1);
        
    } else if (this->start_ == -1) {
        this->start_ = this->end_ = 0;
        this->data_[this->end_] = element;

    } else if (this->end_ == this->cur_size_-1 && this->start_ != 0) {
        this->end_ = 0;
        this->data_[this->end_] = element;

    } else {
        this->end_++;
        this->data_[this->end_] = element;
    }
}

//dequeue - take elements off of queue
template <typename T>
void Queue<T>::dequeue (void)
{   
    if(is_empty()) 
    {
        std::cout<<"cannot dequeue empty queue"<<std::endl;
    } 

    T arr = this->data_[this->start_];
    this-> data_[this->start_] = -1;

    if(this->start_ == this->end_) {
        this->start_ = -1;
        this->end_ = -1;
    } else if (this->start_ == this->cur_size_ - 1) {
        this->start_ = 0;
    } else {
        this->start_++;
    }

    return arr;
}

//clear all elements from queue
template <typename T>
void Queue<T>::clear (void)
{   
    //if there are elements in queue, keep dequeueing
    while(!is_empty())
    {
        this->data_.dequeue();
    }
}
