set(SOURCE
		Interval.cpp
		Key.cpp
    	Chord.cpp
        ChordQuality.cpp
        ChordContainer.cpp
        Jazz.cpp
        Main.cpp
)

link_libraries(libboost_regex.a)
add_executable(libjazz ${SOURCE})

