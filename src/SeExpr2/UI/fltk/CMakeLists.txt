if(FLTK_FOUND)

  set(FLTK_EDITOR_CPPS ExprDialog.cpp ExprMain.cpp)

  #add_library(SeExpr2FEditor ${FLTK_EDITOR_CPPS})
  add_executable(SeExpr2FEditor ${FLTK_EDITOR_CPPS})

  include_directories(${CMAKE_BINARY_DIR}/src/SeExpr2)
  include_directories(${CMAKE_CURRENT_SOURCE_DIR})
  include_directories(${FLTK_INCLUDE_DIRS})

  target_link_libraries(SeExpr2FEditor SeExpr2)
  target_link_libraries(SeExpr2FEditor fltk)
endif()