/*
 *  TestBinaryOps.cpp
 *  hive
 *
 *  Created by Akash Garg on 11/06/10
 *  Copyright 2010 libvoid. All rights reserved.
 *
 */

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <nkbase/BinaryOps.h>

class TestBinaryOps : public CppUnit::TestFixture {

    CPPUNIT_TEST_SUITE(TestBinaryOps);
    CPPUNIT_TEST(testSet);
    CPPUNIT_TEST_SUITE_END();
    
public:
    void setUp() {}
    void tearDown() {}
    
    void testSet();
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestBinaryOps);

//------------------------------------------------------------------------------

void 
TestBinaryOps::testSet()
{
    USING_NK_NS

    set_op<int>::first_argument_type x = 1;
    set_op<int>::second_argument_type y = 2;
    set_op<int>::result_type r = 0;

    set_op<int> s;
    r = s(x, y);

    CPPUNIT_ASSERT(r == 2);
}

//------------------------------------------------------------------------------
