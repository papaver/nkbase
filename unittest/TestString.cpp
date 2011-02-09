//------------------------------------------------------------------------------
//
// Copyright (c) 2011, NektarFX, Inc.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modific-
//  ation, are permitted provided that the following conditions are met:
// 
//  - Redistributions of source code must retain the above copyright notice, 
//    this list of conditions and the following disclaimer.
//  - Redistributions in binary form must reproduce the above copyright 
//    notice, this list of conditions and the following disclaimer in the 
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of NektarFX, Inc. nor the names of its contributors may 
//    be used to endorse or promote products derived from this software 
//    without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSE-
// QUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
// DAMAGE.
// 
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// TestString.cpp
//------------------------------------------------------------------------------

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <nkbase/Defs.h>
#include <nkbase/String.h>

class TestString : public CppUnit::TestFixture {

    CPPUNIT_TEST_SUITE(TestString);
    CPPUNIT_TEST(test);
    CPPUNIT_TEST(testIO);
    CPPUNIT_TEST(testMultipleIO);
    CPPUNIT_TEST_SUITE_END();
    
public:
    void setUp() {}
    void tearDown() {}
    
    void test();
    void testIO();
    void testMultipleIO();
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestString);

//------------------------------------------------------------------------------

void 
TestString::test()
{
    USING_NK_NS

    String name;
    String name2("something");
    String name3 = std::string("something2");
    name = "something";

    CPPUNIT_ASSERT(name == name2);
    CPPUNIT_ASSERT(name != name3);
    CPPUNIT_ASSERT(name != String("testing"));
    CPPUNIT_ASSERT(name == String("something"));
}

//------------------------------------------------------------------------------

void
TestString::testIO()
{
    USING_NK_NS

    String name("some name that i made up");

    std::ostringstream ostr(std::ios_base::binary);

    name.write(ostr);

    name = "some other name";

    CPPUNIT_ASSERT(name == String("some other name"));

    std::istringstream istr(ostr.str(), std::ios_base::binary);

    name.read(istr);

    CPPUNIT_ASSERT(name == String("some name that i made up"));
}

//------------------------------------------------------------------------------

void
TestString::testMultipleIO()
{
    USING_NK_NS

    String name("some name that i made up");
    String name2("something else");

    std::ostringstream ostr(std::ios_base::binary);

    name.write(ostr);
    name2.write(ostr);

    std::istringstream istr(ostr.str(), std::ios_base::binary);

    String n, n2;
    n.read(istr);
    n2.read(istr);

    CPPUNIT_ASSERT(name == n);
    CPPUNIT_ASSERT(name2 == n2);
}

//------------------------------------------------------------------------------
