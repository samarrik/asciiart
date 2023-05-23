#include "cimage.h"

CImage::CImage(){}

void CImage::addFilter( CFilter * filter ) {
    m_filters.push_back(filter);
}

void CImage::applyFilters() {
    for ( auto filter : m_filters )
        filter->apply();
}

void CImage::loadFilters( std::vector<CFilter *> & src ) {
    m_filters = src;
}

void CImage::loadNameType ( std::string & filename, std::string & filetype){
    filename = filename;
    filetype = filetype;
}

void CImage::loadExtractedData( unsigned w, unsigned h, unsigned char * p ){
    m_width = w;
    m_height = h;
    m_pixels = p;
}

void CImage::setGradient( const std::string & src ) {
    m_gradient = src;
}

unsigned CImage::width () const {
    return m_width;
}

unsigned CImage::height () const {
    return m_height;
}

void CImage::grayscale() {
    for ( unsigned i = 0; i < m_width * m_height; i += 4 ) {
        int grayscaled = int(0.2125 * m_pixels[i] + 0.7153 * m_pixels[i+i] + 0.0722 * m_pixels [i+2]);
        m_pixels[i] = grayscaled;
        m_pixels[i+1] = grayscaled;
        m_pixels[i+2] = grayscaled;
        //the last pixel is being skipped
    }
}

void CImage::loadConvertedToAscii ( std::string & src ){
    m_ascii_data = src;
}

std::string & CImage::getGradient(){
    return m_gradient;
}

size_t CImage::lengthGradient(){
    return m_gradient.size();
}

std::string & CImage::getonvertedToAscii ( ){
    return m_ascii_data;
}

void CImage::convert() {
    //TODO
}

void CImage::saveToFile() const{
    //TODO
}

void CImage::print() const noexcept{
    //TODO
}