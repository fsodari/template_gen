#ifndef LIB_MULTI_H_H
#define LIB_MULTI_H_H

char lib_multi_h[] =
"/***********************************************************************************\n\
*   File Name: lib_name.h                                                           \n\
*   Version 1.00                                                                    \n\
*                                                                                   \n\
*   Description:                                                                    \n\
*                                                                                   \n\
*   Note:                                                                           \n\
*                                                                                   \n\
************************************************************************************\n\
*   MIT License                                                                     \n\
*                                                                                   \n\
*   Copyright (c) 2019 Frank Sodari                                                 \n\
*                                                                                   \n\
*   Permission is hereby granted, free of charge, to any person obtaining a copy    \n\
*   of this software and associated documentation files (the \"Software\"), to deal \n\
*   in the Software without restriction, including without limitation the rights    \n\
*   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell       \n\
*   copies of the Software, and to permit persons to whom the Software is           \n\
*   furnished to do so, subject to the following conditions:                        \n\
*                                                                                   \n\
*   The above copyright notice and this permission notice shall be included in all  \n\
*   copies or substantial portions of the Software.                                 \n\
*                                                                                   \n\
*   THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    \n\
*   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        \n\
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     \n\
*   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          \n\
*   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   \n\
*   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   \n\
*   SOFTWARE.                                                                       \n\
***********************************************************************************/\n\
                                                                                    \n\
#ifndef LIB_NAME_H                                                                  \n\
#define LIB_NAME_H                                                                  \n\
                                                                                    \n\
typedef struct                                                                      \n\
{                                                                                   \n\
    int place_holder;                                                               \n\
} lib_name;                                                                         \n\
                                                                                    \n\
lib_name* lib_name_create(void);                                                    \n\
void lib_name_destroy(lib_name *self);                                              \n\
                                                                                    \n\
#endif // LIB_NAME_H                                                                \n\
                                                                                    \n\
";

#endif // LIB_MULTI_H_H
