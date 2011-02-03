/*
 *  TestString.cpp
 *  volume
 *
 *  Created by Akash Garg on 6/8/10.
 *  Copyright 2010 libvoid. All rights reserved.
 *
 */


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
