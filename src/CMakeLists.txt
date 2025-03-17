add_executable(your_executable 
main.cpp
)

find_package(boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(your_executable PRIVATE boost::boost)