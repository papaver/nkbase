# Find the ILM Base library. 

# ILMBASE_INCLUDE_DIR - ilm base headers location
# ILMBASE_LIBRARIES - ilm base libraries
# ILMBASE_FOUND - true if found

if (ILMBASE_INCLUDE_DIR AND ILMBASE_LIBRARIES)
  # already in cache, be silent
  set (ILMBASE_FIND_QUIETLY TRUE)
endif (ILMBASE_INCLUDE_DIR AND ILMBASE_LIBRARIES)

# find the headers
find_path (ILMBASE_INCLUDE_DIR
  OpenEXR/ImathMath.h
  PATHS ${IlmBase_Inc_Dir}
  )

# find the libraries
find_library (ILMBASE_EX_LIBRARY Iex
  HINTS ${ILMBASE_INCLUDE_DIR}/../lib
  PATHS ${IlmBase_Lib_Dir}
  )

find_library (ILMBASE_MATH_LIBRARY Imath
  HINTS ${ILMBASE_INCLUDE_DIR}/../lib
  PATHS ${IlmBase_Lib_Dir}
  )

find_library (ILMBASE_HALF_LIBRARY Half
  HINTS ${ILMBASE_INCLUDE_DIR}/../lib
  PATHS ${IlmBase_Lib_Dir}
  )

# handle the QUIETLY and REQUIRED arguments and set ILMBASE_FOUND to
# TRUE if all listed variables are TRUE
include (FindPackageHandleStandardArgs)
find_package_handle_standard_args (
  IlmBase
  "
  IlmBase (http://www.openexr.com/) not found. Use ccmake to configure paths.
  Adjust values for IlmBase_Inc_Dir and IlmBase_Lib_Dir
  "
  ILMBASE_INCLUDE_DIR 
  ILMBASE_MATH_LIBRARY ILMBASE_EX_LIBRARY ILMBASE_HALF_LIBRARY)

if (ILMBASE_FOUND)
  set (ILMBASE_INCLUDE_DIR ${ILMBASE_INCLUDE_DIR})
  set (ILMBASE_LIBRARIES ${ILMBASE_EX_LIBRARY} ${ILMBASE_HALF_LIBRARY})
  set (ILMBASE_LIBRARIES ${ILMBASE_LIBRARIES} ${ILMBASE_MATH_LIBRARY})
else (ILMBASE_FOUND)
  set (ILMBASE_INCLUDE_DIR)
  set (ILMBASE_LIBRARIES)
endif (ILMBASE_FOUND)
