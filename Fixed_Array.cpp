// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//default constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
: Array_Base<T>()
{
    
}

//copy constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
: Array_Base<T>(& arr)
{
    
}

//initializing constructor with fill
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
: Array_Base<T>(fill)
{
    
}

//destructor
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{

}


