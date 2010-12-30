set(EXECUTABLE_OUTPUT_PATH ./bin)
set(SOURCE ChordExample.cpp)

link_libraries(libboost_regex.a)
add_executable(chordexample ${SOURCE})
target_link_libraries(chordexample jazz)
