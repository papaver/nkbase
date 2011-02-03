# Find the CPPUNIT Library

# CPPUNIT_INCLUDE_DIR - ilm base headers location
# CPPUNIT_LIBRARIES - ilm base libraries
# CPPUNIT_FOUND - true if found

if (CPPUNIT_INCLUDE_DIR AND CPPUNIT_LIBRARIES)
  # already in cache, be silent
  set (CPPUNIT_FIND_QUIETLY TRUE)
endif (CPPUNIT_INCLUDE_DIR AND CPPUNIT_LIBRARIES)

# find the headers
find_path (CPPUNIT_INCLUDE_DIR
  cppunit/TestRunner.h
  PATHS ${CppUnit_Inc_Dir}
  )

# find the libraries
find_library (CPPUNIT_LIBRARY cppunit
  HINTS ${CPPUNIT_INCLUDE_DIR}/../lib
  PATHS ${CppUnit_Lib_Dir}
  )

# handle the QUIETLY and REQUIRED arguments and set CPPUNIT_FOUND to
# TRUE if all listed variables are TRUE
include (FindPackageHandleStandardArgs)
find_package_handle_standard_args (
  CppUnit 
  "
  CppUnit (http://sourceforge.net/projects/cppunit/) not found.
  Please adjust values for CppUnit_Inc_Dir and CppUnit_Lib_dir
  "
  CPPUNIT_INCLUDE_DIR CPPUNIT_LIBRARY)

if (CPPUNIT_FOUND)
  set (CPPUNIT_INCLUDE_DIR ${CPPUNIT_INCLUDE_DIR})
  set (CPPUNIT_LIBRARIES ${CPPUNIT_LIBRARY})
else (CPPUNIT_FOUND)
  set (CPPUNIT_INCLUDE_DIR)
  set (CPPUNIT_LIBRARIES)
endif (CPPUNIT_FOUND)
