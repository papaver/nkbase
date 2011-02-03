
# Find files and directories to compile and install
#-------------------------------------------------------------------------------

set (Directories 
  .
  )

append_files (Headers "h" ${Directories})
append_files (Inlines "hpp" ${Directories})
append_files (Sources "cpp" ${Directories})

# Define library to build and it's dependencies
#-------------------------------------------------------------------------------

if (BUILD_SHARED)
  add_library (${PROJECT_NAME} SHARED ${Headers} ${Inlines} ${Sources})
else (BUILD_SHARED)
  add_library (${PROJECT_NAME} ${Headers} ${Inlines} ${Sources})
endif (BUILD_SHARED)

target_link_libraries (${PROJECT_NAME} ${ILMBASE_LIBRARIES})

# What do we install when running 'make install'
#-------------------------------------------------------------------------------

install (
  TARGETS ${PROJECT_NAME}
  DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
  )

install (
  FILES ${Headers}
  DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${PROJECT_NAME}
  )

#-------------------------------------------------------------------------------
