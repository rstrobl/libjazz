set(EXECUTABLE_OUTPUT_PATH ./bin)
set(SOURCE ChordExample.cpp)

link_libraries(libboost_regex.a libjazz.a)
add_executable(chordexample ${SOURCE})