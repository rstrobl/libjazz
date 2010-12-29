set(SOURCE
		Interval.cpp
		Key.cpp
    	Chord.cpp
        ChordQuality.cpp
        ChordContainer.cpp
        Jazz.cpp
)

link_libraries(libboost_regex.a)
add_library(jazz ${SOURCE})

install_targets(/lib jazz)
