// -*- C++ -*-
// $Id: Array.inl 828 2011-02-07 14:21:52Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include <stdexcept>
#include <iostream>

//size function
template <typename T>
inline
size_t Array <T>::size (void) const
{
    return this->cur_size_;
}

//max size inline function
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
    return this->max_size_;
}
