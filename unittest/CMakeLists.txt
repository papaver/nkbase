
set (Directories 
  .
  )

append_files (Sources "cpp" ${Directories})

include_directories (${PROJECT_SOURCE_DIR}/src)

add_executable (unittest ${Sources})

target_link_libraries (unittest nkbase ${ILMBASE_LIBRARIES} 
                                       ${CPPUNIT_LIBRARIES})
