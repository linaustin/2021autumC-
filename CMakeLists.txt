cmake_minimum_required(VERSION 3.20)
project(programming)

set(CMAKE_CXX_STANDARD 17)




add_executable(HW1_0811074 HW1/HW1_0811074.cpp )
add_executable(hw2_0811074_main HW2/hw2_0811074_main.cpp HW2/hw2_lib.h HW2/hw2_lib.cpp)

add_executable(struct week6/struct.cpp)
add_executable(stringcompare week6/stringcompare.cpp)
add_executable(multimain week6/multimain.cpp)
add_executable(studentGradeMain week6/studentGradeMain.cpp  week6/studentlib.cpp  )

add_executable(practice1 week7/practice1.cpp)
add_executable(practice2 week7/practice2.cpp)

add_executable(week1_1 midterm_practice/week1_1.cpp)
add_executable(week1_2 midterm_practice/week1_2.cpp)
add_executable(week1_3 midterm_practice/week1_3.cpp)
add_executable(week1_4 midterm_practice/week1_4.cpp)

add_executable(0811074_Q1 midterm_week1/0811074_Q1.cpp )
add_executable(0811074_Q2 midterm_week1/0811074_Q2.cpp midterm_week1/0811074_Q2lib.cpp midterm_week1/0811074_Q2lib.h)
add_executable(0811074_Q3 midterm_week1/0811074_Q3.cpp)
add_executable(0811074_Q4 midterm_week1/0811074_Q4.cpp)

add_executable(test test.cpp)

add_executable(cbox week8/cbox.cpp)
add_executable(triangle_main week8/triangle_main.cpp week8/trianglelib.h week8/trianglelib.cpp)

add_executable(triangle_class week9/triangle_class.cpp week9/triangle_classlib.cpp week9/triangle_classlib.h week9/studentScorelib.cpp week9/studentScorelib.h)
add_executable(studentmain week9/studentmain.cpp week9/studentScorelib.cpp week9/studentScorelib.h)

add_executable(openfile1 week10/openfile1.cpp)
add_executable(openfile2 week10/openfile2.cpp)
add_executable(rand_generator week10/rand_generator.cpp)
add_executable(rand_reader week10/rand_reader.cpp)

add_executable(xml_generator week10/xml_generator.cpp)
target_link_libraries(xml_generator tinyxml)

add_library(tinyxml STATIC week10/tiny_xml/tinyxml.cpp week10/tiny_xml/tinystr.cpp week10/tiny_xml/tinystr.h week10/tiny_xml/tinyxml.h week10/tiny_xml/tinyxmlerror.cpp week10/tiny_xml/tinyxmlparser.cpp)

add_executable(hw2_alternative HW2/hw2_alternative.cpp)