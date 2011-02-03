/*
 *  main.cpp
 *  volume
 *
 *  Created by Akash Garg on 6/5/10.
 *  Copyright 2010 libvoid. All rights reserved.
 *
 */


#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
 
int main()
{
    CppUnit::Test *suite = 
        CppUnit::TestFactoryRegistry::getRegistry().makeTest();
    
    CppUnit::TextTestRunner runner;
    runner.addTest(suite);
    runner.run();
    return 0;
}
