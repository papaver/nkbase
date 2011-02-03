/*
 * header
 */

#ifndef __NKBASE_STRING_H__
#define __NKBASE_STRING_H__

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------

#include <nkbase/Defs.h>
#include <sstream>
#include <string>

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------

BEGIN_NK_NS

class String : public std::string 
{

public:

    /** 
     * Constructors.
     */
    String() : std::string() {}
    String(const char *cstr) : std::string(cstr) {}
    String(const std::string &str) : std::string(str) {}
    ~String() {}

    /** 
     * Reads in the name from the input stream.
     */
    void read(std::istream &is);

    /** 
     * Writes the name to the output stream.
     */
    void write(std::ostream &os) const;

    /** 
     * Assignment operator.
     */
    String& operator=(const char *s);
};

END_NK_NS

//------------------------------------------------------------------------------
// class implementation
//------------------------------------------------------------------------------

BEGIN_NK_NS

#include <nkbase/String.hpp>

END_NK_NS

//------------------------------------------------------------------------------

#endif // __NKBASE_STRING_H__
