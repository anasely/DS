cmake_minimum_required(VERSION 3.17)
project(DS)

set(CMAKE_CXX_STANDARD 14)

add_executable(DS
        Array/3-array.cpp
        Array/delete_element_from_array.cpp
        Array/insertions.cpp
        Array/merge_two_array.cpp
        Array/pointer_array.cpp
        Array/searching_for_elem_array.cpp
        Array/sorting_array.cpp
        Array/sum_two_matices.cpp
        Array/traversing_array.cpp
        "Linked List/circular_list.cpp"
        "Linked List/singly_linked_list.cpp")
