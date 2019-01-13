#[[ ================================================================================
    MIT License

    Copyright (c) 2019 Frank Sodari

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
==================================================================================]]

add_library(lib_gen lib_gen.c)
add_library(lib_multi_gen lib_multi_gen.c)
target_link_libraries(lib_gen lib_multi_gen)

target_include_directories(lib_multi_gen PRIVATE ${CMAKE_SOURCE_DIR}/templates)
# install(TARGETS lib_name CONFIGURATIONS Release DESTINATION lib)
# install(FILES lib_name.h CONFIGURATIONS Release DESTINATION include)

install(TARGETS lib_gen DESTINATION ${CMAKE_SOURCE_DIR}/lib)
install(FILES lib_gen.h DESTINATION ${CMAKE_SOURCE_DIR}/include)

add_executable(template_gen main.c)
target_link_libraries(template_gen lib_gen)

install(TARGETS template_gen
        DESTINATION bin)
install(TARGETS template_gen
        DESTINATION ${CMAKE_SOURCE_DIR}/lib)