/*
 * header
 */

// no includes allowed

//------------------------------------------------------------------------------

inline void 
String::read(std::istream &is)
{
    int32_t size;
    is.read((char*)&size, sizeof(int32_t));

    // handle special case of the empty string.
    if (size == 0) return;

    char buffer[size];
    is.get(buffer, size + 1);
    this->operator=(buffer);
}

//------------------------------------------------------------------------------

inline void 
String::write(std::ostream &os) const
{
    int32_t size = (int32_t)this->size();
    os.write((char*)&size, sizeof(int32_t));

    // handle special case of the empty string.
    if (size == 0) return;

    os << *this;
}

//------------------------------------------------------------------------------

inline String& 
String::operator=(const char *s)
{
    this->std::string::operator=(s);
    return *this;
}

//------------------------------------------------------------------------------

inline bool 
operator==(const String &a, const String &b)
{
    return (a.compare(b) == 0);
}

//------------------------------------------------------------------------------

inline bool
operator!=(const String &a, const String &b)
{
    return !(operator==(a, b));
}

//------------------------------------------------------------------------------

inline bool
operator<(const String &a, const String &b)
{
    return (a.compare(b) < 0);
}

//------------------------------------------------------------------------------
