// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout

//default constructor
template <typename T>
Array <T>::Array (void)
: Array_Base<T>()
{
    
}

//default constructor of size length
template <typename T>
Array <T>::Array (size_t length)
: Array_Base<T>(length)
{
   
}

//constructor - array of size length, fill with data type
template <typename T>
Array <T>::Array (size_t length, T fill)
: Array_Base<T>(length,fill)
{

}

//copy constructor
template <typename T>
Array <T>::Array (const Array & array)
: Array_Base<T>(& array)
{
    
}

//destructor
template <typename T>
Array <T>::~Array (void)
{


}

//assignment operator
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{   
    if(this != &rhs) {
        return *this;
    }

    if(this->max_size_ < rhs.size())
    {
        delete [] this->data_;

        this->data_ = new T[rhs.size()];
    }

    this->cur_size_ = rhs.size();
    this->max_size_ = rhs.size();

    for(size_t i = 0; (i < this->cur_size_); i++)
    {
       this->data_[i] = rhs.data_[i];
    }
}

//index operator
template <typename T>
T & Array <T>::operator [] (size_t index)
{
    try 
    {
        if(index < 0) 
        {
            throw "Invalid index";
        } else if (index > this->max_size_) 
        {
            throw "Invalid index";
        }
    } catch (const std::out_of_range& oor) 
    {
        std::cout<<"Invalid index value"<<std::endl;
    }

    return this->data_[index];
}

//index operator
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
    try 
    {
        if(index < 0) 
        {
            throw "Invalid index";
        } else if (index > this->max_size_) 
        {
            throw "Invalid index";
        }
    } catch (const std::out_of_range& oor) {
        std::cout<<"Invalid index value"<<std::endl;
    }

    //loop through array until you get to the index indicated
    for(int i = 0; i < index; i++) 
    {
      
        if(this->data_[i] == index) 
        {
            std::cout<<this->data_[i]<<std::endl;
        }
    } 

    //exception handling - if index is greater than max size, throw error
    try 
    {
        if(index > this->max_size_) 
        {
            throw "Out of range";
        }
    } catch (const std::out_of_range& oor) 
    {
        std::cout<<"Invalid index value"<<std::endl;
    }
  }


//get character at specific index
template <typename T>
T Array <T>::get (size_t index) const
{
    if(index < this->max_size_)
    {
        //return this->data_[index];
    }

    try 
    {
        if(index < 0) {
            throw "Invalid index";
        } else if (index > this->max_size_) 
        {
            throw "Invalid index";
        }
    } catch (const std::out_of_range& oor) 
    {
        std::cout<<"Invalid index value"<<std::endl;
    }
}

//set - replace a character
template <typename T>
void Array <T>::set (size_t index, T value)
{
    try 
    {
        if(index < 0) {
            throw "Invalid index";
        } else if (index > this->max_size_) 
        {
            throw "Invalid index";
        }
    } catch (std::logic_error) 
    {
        std::cout<<"Invalid index value"<<std::endl;
    }

    this->data_[index] = value;
}

//resize the array
template <typename T>
void Array <T>::resize (size_t new_size)
{
    if(new_size > this->max_size_) 
    {
        T * copy = new T[new_size];
        T * swap = this->data_;

        for(int i = 0; i < new_size; i ++) 
        {
            copy[i] = swap[i];
        }

        this->max_size_ = new_size;
        this->cur_size_ = new_size; 

        this->data_ = copy;

        copy = swap;

        delete [] copy;

    } else 
    {
        this->cur_size_ = new_size;
    } 
}

//find
template  <typename T>
int Array <T>::find (T value) const
{
    for(int i = 0; i < this->max_size_; i++)
    {   
        if(*(this->data_ + i) == value)
        {   
            std::cout<<i<<std::endl;

            return i;
        } 
    }
}

//find with specified start
template <typename T>
int Array <T>::find (T val, size_t start) const
{
    try 
    {
        if(start < 0) 
        {
            throw "Invalid index";
        } else if (start >this->max_size_) 
        {
            throw "Invalid index";
        }
    } catch (const std::out_of_range& oor) 
    {
        std::cout<<"Invalid index value"<<std::endl;
    }

    for(int i = start; i < this->max_size_; i++)
    {   
        if(this->data_[i] == val)
        {           
            std::cout<<i<<std::endl;

            return i;
        }
    }

    return -1;
}

//equality operator
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{

    //self assignment check
    if(this != &rhs) 
    {
        return *this;
    }

    bool arrEqual = true;

    if(rhs.size() != this->cur_size_)
    {   
        return false;
        arrEqual = false;
    }

    for(size_t i = 0; i < rhs.size(); i++)
    {   
        if(rhs[i] == this->data_[i]) 
        {
            return true;
            arrEqual = true;
        }
    }

    return arrEqual;
}

//inequality operator
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{

    //need to simply this function
    bool arrEqual = true;

    if(!(rhs.size() == this->cur_size_))
    {   
        return true;
        arrEqual = true;
    }

    for(int i = 0; i < rhs.size(); i++)
    {   
        if(!(rhs[i] == this->data_[i]))
        {
            return true;
            arrEqual = true;
        }
    }

    return arrEqual;
}

//fill
template <typename T>
void Array <T>::fill (T value)
{
    for(int i = 0; i < this->cur_size_; i++) 
    {
        this->data_[i] = value;
    }
}

//reclaim unused space if necessary
template <typename T>
void Array <T>::shrink (void) 
{
    if(this->cur_size_ < this->max_size_) 
    {
        Array_Base<T> * copy = new Array_Base<T>(this->cur_size_);

        if(this->max_size_ < this->cur_size_) 
        {
            for(int i = 0; i < this->max_size_; i++)
            {
                copy[i] = this->data_[i];
            }
        }    
    }
}