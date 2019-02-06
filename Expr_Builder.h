#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_


class Expr_Builder { 

public:   

    Expr_Builder (void);

    ~Expr_Builder (void);
    
    virtual void start_expression (void);  

    virtual void build_number (int n) = 0;   
    
    virtual void build_add_operator (void) = 0;   
    
    virtual void build_subtract_operator (void) = 0;   
    
    virtual void build_open_parenthesis (void) = 0;   
    
    virtual void build_close_parenthesis (void) = 0;   // get the current expression   
    
    //virtual Math_Expr * get_expression (void) = 0; 
    
};

#endif //!defined  