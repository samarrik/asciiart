#include "cfilter.h"

CGradient::CGradient ( std::string src ) {
    //If the object was created without passing any data into it, the default value will be set automatically;
    if (src != "") {
        m_gradient = src; //If some value was passed into it, set it as value;
    }
}

void CGradient::apply( CImage & src ) {
    src.setGradient( m_gradient );
}

CFilter & CGradient::set_val( const std::string & src ){
    m_gradient = src;
    return *this;
}